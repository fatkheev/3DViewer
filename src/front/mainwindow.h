#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "modelviewer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
    ModelViewer* openGLWidget;  // Используйте ModelViewer вместо QOpenGLWidget
};

#endif // MAINWINDOW_H
