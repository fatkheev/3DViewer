#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../gif.h"
#include <QLayout>
#include <QImageWriter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    openGLWidget = ui->openGLWidget;

    // Связывание сигналов и слотов
    connect(ui->horizontalScrollBar_x, &QScrollBar::valueChanged,
            openGLWidget, &ModelViewer::on_horizontalScrollBar_xValueChanged);
    connect(ui->horizontalScrollBar_y, &QScrollBar::valueChanged,
            openGLWidget, &ModelViewer::on_horizontalScrollBar_yValueChanged);
    connect(ui->horizontalScrollBar_z, &QScrollBar::valueChanged,
            openGLWidget, &ModelViewer::on_horizontalScrollBar_zValueChanged);
    connect(ui->ScrollBar_scale, &QScrollBar::valueChanged, openGLWidget, &ModelViewer::on_ScrollBar_scaleValueChanged);

    connect(ui->moveScrollBar_x, &QScrollBar::valueChanged, openGLWidget, &ModelViewer::on_moveScrollBar_xValueChanged);
    connect(ui->moveScrollBar_y, &QScrollBar::valueChanged, openGLWidget, &ModelViewer::on_moveScrollBar_yValueChanged);
    connect(ui->moveScrollBar_z, &QScrollBar::valueChanged, openGLWidget, &ModelViewer::on_moveScrollBar_zValueChanged);


    // кнопки цветов фона

    connect( ui->black_background, SIGNAL(clicked()), this, SLOT(set_color_background()));

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_15_clicked() {
    Vertex *vertices;
    Face *faces;
    int num_vertices, num_faces;

    QString filename = QFileDialog::getOpenFileName(this, "Open OBJ file", "", "OBJ Files (*.obj)");
    if(filename.isEmpty()) return;

    if(parse_obj(filename.toStdString().c_str(), &vertices, &num_vertices, &faces, &num_faces) == 0) {
        ui->openGLWidget->setData(vertices, num_vertices, faces, num_faces);

        // Извлекаем имя файла из полного пути
        QFileInfo fileInfo(filename);
        QString fileNameOnly = fileInfo.fileName();

        // Устанавливаем значения для меток
        ui->label_name->setText(fileNameOnly);
        ui->label_V->setText(QString("%1").arg(num_vertices));
        ui->label_F->setText(QString("%1").arg(num_faces));
    }
}

void MainWindow::on_pushButton_27_clicked()
{

    ui->openGLWidget->setData(0, 0, 0, 0);
    ui->label_name->setText("");
    ui->label_V->setText("");
    ui->label_F->setText("");
}

void MainWindow::on_screenshot_clicked()
{
    QPixmap screenshot = openGLWidget->grab();

     QString filePath = QFileDialog::getSaveFileName(this, "Сохранить скриншот", "",
                                                     "BMP Files (*.bmp);;JPG Files (*.jpg)");

     if (!filePath.isEmpty()) {
         screenshot.save(filePath);
     }else {
         QMessageBox::warning(this, "", "Не удалось сохранить скриншот");
       }

}

void MainWindow::on_GIF_clicked()
{
    QString temp = QCoreApplication::applicationDirPath();
    temp.resize(temp.size() - 38);
    QString fileName = QFileDialog::getSaveFileName(
        this, tr("Сохранение GIF"), temp + "/images", tr("Gif (*.gif)"));

    if (!fileName.isEmpty()) {
      createGif(fileName);
    } else {
      QMessageBox::warning(this, "", "Не удалось сохранить GIF");
    }
}

void MainWindow::createGif(QString fileName) {
  QImage img(openGLWidget->size(), QImage::Format_RGB32), img640_480;
  QPainter painter(&img);
  QTime dieTime;
  GifWriter gif;
  QByteArray ba = fileName.toLocal8Bit();
  const char *c_str = ba.data();
  GifBegin(&gif, c_str, 640, 480, 10);

  for (int i = 1; i <= 50; ++i) {
    if (i % 10 == 0) ui->GIF->setText(QString::number(i / 10) + " сек");
    openGLWidget->render(&painter);
    img640_480 = img.scaled(QSize(640, 480));
    GifWriteFrame(&gif, img640_480.bits(), 640, 480, 10);
    dieTime = QTime::currentTime().addMSecs(100);
    while (QTime::currentTime() < dieTime)
      QCoreApplication::processEvents(QEventLoop::AllEvents, 10);
  }
  ui->GIF->setText("GIF");
  GifEnd(&gif);
  QMessageBox::information(this, "GIF READY", "GIF сохранен успешно");
}


void MainWindow::set_color_background()
{

       QColor backgroundColor(255, 0, 0);


       openGLWidget->setBackgroundColor(backgroundColor);
}





