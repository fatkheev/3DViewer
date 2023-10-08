#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    openGLWidget = ui->openGLWidget;
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_go_clicked() {
    Vertex *vertices;
    Face *faces;
    int num_vertices, num_faces;
    QString filename = QFileDialog::getOpenFileName(this, "Open OBJ file", "", "OBJ Files (*.obj);;All Files (*)");
    if(filename.isEmpty()) return;
    if(parse_obj(filename.toStdString().c_str(), &vertices, &num_vertices, &faces, &num_faces) == 0) {
        openGLWidget->setData(vertices, num_vertices, faces, num_faces);
    }
}
