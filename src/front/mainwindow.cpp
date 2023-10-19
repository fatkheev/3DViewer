#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../gif.h"
#include <QLayout>
#include <QImageWriter>
#include <set>
#include <utility>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    timer = new QTimer(0);

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

    connect(ui->green_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(Qt::green); });
    connect(ui->red_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(Qt::red); });
    connect(ui->black_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(Qt::black); });
    connect(ui->blue_background, &QPushButton::clicked, this, [this]() { openGLWidget->set_background_color(Qt::blue); });
    connect(ui->yellow_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(Qt::yellow); });
    connect(ui->orange_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(QColor(255, 165, 0)); });
    connect(ui->white_background, &QPushButton::clicked, this, [this]() { openGLWidget->set_background_color(Qt::white); });
    connect(ui->purply_background, &QPushButton::clicked, this, [this]() {openGLWidget->set_background_color(QColor(128, 0, 128)); });
    connect(ui->pink_background, &QPushButton::clicked, this, [this]() { openGLWidget->set_background_color(QColor(255, 192, 203)); });


    // кнопки цвета ребер

    connect(ui->yellow_edge, &QPushButton::clicked, this, [this]() {openGLWidget->set_edge_color(Qt::yellow); });
    connect(ui->orange_edge, &QPushButton::clicked, this, [this]() {openGLWidget->set_edge_color(QColor(255, 165, 0)); });
    connect(ui->white_edge, &QPushButton::clicked, this, [this]() {openGLWidget->set_edge_color(Qt::white); });
    connect(ui->purply_edge, &QPushButton::clicked, this, [this]() {openGLWidget->set_edge_color(QColor(128, 0, 128)); });

    // кнопки цвета вершин
    connect(ui->type_V, SIGNAL(currentIndexChanged(int)),
            openGLWidget, SLOT(on_type_V_activated(int)));
    connect(ui->horizontal_sccrol_vertice, &QScrollBar::valueChanged,
            openGLWidget, &ModelViewer::on_horizontal_sccrol_vertice_valueChanged);
    // Подключение кнопок к изменению цвета:
    connect(ui->green_vertex, &QPushButton::clicked, this, [this]() { openGLWidget->setVertexColor(Qt::green); });
    connect(ui->red_vertex, &QPushButton::clicked, this, [this]() { openGLWidget->setVertexColor(Qt::red); });
    connect(ui->black_vertex, &QPushButton::clicked, this, [this]() { openGLWidget->setVertexColor(Qt::white); });
    connect(ui->blue_vertex, &QPushButton::clicked, this, [this]() { openGLWidget->setVertexColor(Qt::blue); });


    //скрол толщины ребер

    connect(ui->horizontal_scroll_edge, &QScrollBar::valueChanged, this, &MainWindow::horizontal_scroll_edge);



    // скрол связанный с окошком ввода
    connect(ui->horizontalScrollBar_x, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::updateHorizontalScrollBarX);

    connect(ui->horizontalScrollBar_y, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_2, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::updateHorizontalScrollBarY);

    connect(ui->horizontalScrollBar_z, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_3, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::updateHorizontalScrollBarZ);

    connect(ui->moveScrollBar_x, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_6, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::update_moveScrollBar_x);

    connect(ui->moveScrollBar_y, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_7, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::update_moveScrollBar_y);

    connect(ui->moveScrollBar_z, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_5, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::update_moveScrollBar_z);

    connect(ui->ScrollBar_scale, &QScrollBar::valueChanged, this, &MainWindow::update_spinbox);
    connect(ui->spinBox_4, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::scroll_bar_scale);

    connect(ui->ProjectionBox, SIGNAL(currentIndexChanged(int)),openGLWidget, SLOT(on_ProjectionBox_currentIndexChanged(int)));

    connect(ui->type_edge, SIGNAL(currentIndexChanged(int)),openGLWidget, SLOT(on_type_edge_activated(int)));

    connect(timer, SIGNAL(timeout()), this, SLOT(create_gif()));

}

MainWindow::~MainWindow() {
    saveSettings();
    delete ui;
}

void MainWindow::update_spinbox(int value) {
    if (sender() == ui->horizontalScrollBar_x) {
        ui->spinBox->setValue(value);
    } else if (sender() == ui->horizontalScrollBar_y) {
        ui->spinBox_2->setValue(value);
    } else if (sender() == ui->horizontalScrollBar_z) {
        ui->spinBox_3->setValue(value);
    } else if (sender() == ui->moveScrollBar_x) {
        ui->spinBox_6->setValue(value);
    } else if (sender() == ui->moveScrollBar_y) {
        ui->spinBox_7->setValue(value);
    } else if (sender() == ui->moveScrollBar_z) {
        ui->spinBox_5->setValue(value);
    } else if (sender() == ui->ScrollBar_scale) {
        ui->spinBox_4->setValue(value);
    }
}

void MainWindow::updateHorizontalScrollBarX(int value) {
    ui->horizontalScrollBar_x->setValue(value);
}

void MainWindow::updateHorizontalScrollBarY(int value) {
    ui->horizontalScrollBar_y->setValue(value);
}

void MainWindow::updateHorizontalScrollBarZ(int value) {
    ui->horizontalScrollBar_z->setValue(value);
}

void MainWindow::update_moveScrollBar_x(int value) {
    ui->moveScrollBar_x->setValue(value);
}

void MainWindow::update_moveScrollBar_y(int value) {
    ui->moveScrollBar_y->setValue(value);
}

void MainWindow::update_moveScrollBar_z(int value) {
    ui->moveScrollBar_z->setValue(value);
}

void MainWindow::scroll_bar_scale(int value) {
    ui->ScrollBar_scale->setValue(value);
}

void MainWindow::on_clean_clicked()
{
    ui->openGLWidget->setData(0, 0, 0, 0);
    ui->label_name->setText("");
    ui->label_V->setText("");
    ui->label_F->setText("");
    ui->spinBox->setValue(0);
    ui->spinBox_2->setValue(0);
    ui->spinBox_3->setValue(0);
    ui->spinBox_4->setValue(100);
    ui->spinBox_5->setValue(0);
    ui->spinBox_6->setValue(0);
    ui->spinBox_7->setValue(0);
    ui->horizontal_scroll_edge->setValue(0);
    openGLWidget->set_background_color(Qt::black);
    openGLWidget->set_edge_color(Qt::white);
    ui->type_edge->setCurrentIndex(0);
    ui->ProjectionBox->setCurrentIndex(0);
    ui->horizontal_sccrol_vertice->setValue(2);
    ui->type_V->setCurrentIndex(0);
    openGLWidget->setVertexColor(Qt::white);
//
}

void MainWindow::on_open_file_clicked()
{
    Vertex *vertices;
    Face *faces;
    int num_vertices, num_faces;

    QString filename = QFileDialog::getOpenFileName(this, "Open OBJ file", "", "OBJ Files (*.obj)");
    if(filename.isEmpty()) return;
//   on_clean_clicked();
    if(parse_obj(filename.toStdString().c_str(), &vertices, &num_vertices, &faces, &num_faces) == 0) {
        ui->openGLWidget->setData(vertices, num_vertices, faces, num_faces);

        // Извлекаем имя файла из полного пути
        QFileInfo fileInfo(filename);
        QString fileNameOnly = fileInfo.fileName();

        // Устанавливаем значения для меток
        ui->label_name->setText(fileNameOnly);
        ui->label_V->setText(QString("%1").arg(num_vertices));
        int uniqueEdgesCount = countUniqueEdges(faces, num_faces);
        ui->label_F->setText(QString("%1").arg(uniqueEdgesCount));
    }
}

void MainWindow::on_screenshot_clicked()
{
    QPixmap screenshot = openGLWidget->grab();

     QString filePath = QFileDialog::getSaveFileName(this, "Сохранить скриншот", "",
                                                     "BMP Files (*.bmp);;JPG Files (*.jpg)");

     if (!filePath.isEmpty()) {
         screenshot.save(filePath);
     }
}

void MainWindow::on_GIF_clicked()
{
    filePat = QFileDialog::getSaveFileName(this, tr("Сохрнить Gif"), "/", tr("Файлы (*.gif)"));
    if (filePat.isEmpty()) {
      QMessageBox::warning(this, tr("Ошибка"), tr("Файл не был сохранен."));
    } else {
      ui->GIF->setEnabled(false);
      gif_frame = new QGifImage;
      gif_frame->setDefaultDelay(10);
      timer->setInterval(100);
      timecount = 1;
      timer->start();
      connect(timer, &QTimer::timeout, this, &MainWindow::gif_button_text);

    }

}

void MainWindow::gif_button_text()
{
    ui->GIF->setText(QString::number(timecount / 10) + " сек");

}

void MainWindow::create_gif() {
    if (gif_frame && timer) {
          QImage img = openGLWidget->grabFramebuffer();
          QSize img_size(640, 480);
          QImage scaled_img = img.scaled(img_size);
          gif_frame->addFrame(scaled_img);
          int MaxFrames = 50;
          if (timecount == MaxFrames) {
              timer->stop();
               ui->GIF->setText("GIF");
              gif_frame->save(filePat);
              QMessageBox::information(0, "/", "Gif успешно сохранен.");
              delete gif_frame;
                gif_frame = nullptr;
                ui->GIF->setEnabled(true);

          }
          timecount++;
      }

}



void MainWindow::horizontal_scroll_edge(int action)
{
    ui->openGLWidget ->line_edge=action;
    ui->openGLWidget->update();

}

// Подсчет ребер
int MainWindow::countUniqueEdges(Face *faces, int num_faces) {
    std::set<std::pair<int, int>> uniqueEdges;

    for (int i = 0; i < num_faces; ++i) {
        for (int j = 0; j < faces[i].num_vertices; ++j) {
            int v1 = faces[i].vertices[j];
            int v2 = faces[i].vertices[(j + 1) % faces[i].num_vertices];

            if (v1 > v2) std::swap(v1, v2);

            uniqueEdges.insert({v1, v2});
        }
    }

    return uniqueEdges.size();
}

// Сохранение
void MainWindow::saveSettings() {
    QSettings settings("YourOrganization", "YourApp");

    // Сохраняем геометрию и состояние главного окна
    settings.setValue("mainWindowGeometry", saveGeometry());
    settings.setValue("mainWindowState", saveState());

    // Положение ползунков
    settings.setValue("horizontalScrollBar_x", ui->horizontalScrollBar_x->value());
    settings.setValue("horizontalScrollBar_y", ui->horizontalScrollBar_y->value());
    settings.setValue("horizontalScrollBar_z", ui->horizontalScrollBar_z->value());

    settings.setValue("ScrollBar_scale", ui->ScrollBar_scale->value());

}

void MainWindow::loadSettings() {
    QSettings settings("YourOrganization", "YourApp");

    // Восстанавливаем геометрию и состояние главного окна
    restoreGeometry(settings.value("mainWindowGeometry").toByteArray());
    restoreState(settings.value("mainWindowState").toByteArray());

    // Положение ползунков
    ui->horizontalScrollBar_x->setValue(settings.value("horizontalScrollBar_x", 0).toInt());
    ui->spinBox->setValue(ui->horizontalScrollBar_x->value());

    ui->horizontalScrollBar_y->setValue(settings.value("horizontalScrollBar_y", 0).toInt());
    ui->spinBox_2->setValue(ui->horizontalScrollBar_y->value());

    ui->horizontalScrollBar_z->setValue(settings.value("horizontalScrollBar_z", 0).toInt());
    ui->spinBox_3->setValue(ui->horizontalScrollBar_z->value());

    ui->ScrollBar_scale->setValue(settings.value("ScrollBar_scale", 0).toInt());
    ui->spinBox_4->setValue(ui->ScrollBar_scale->value());

}
