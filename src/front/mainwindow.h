#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "modelviewer.h"


#include <QMessageBox>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QOpenGLWidget>
#include <QWidget>
#include <QtOpenGL>
#include <QDebug>


#include <QColorDialog>
#include <QPalette>



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
    void on_clean_clicked();
    void on_screenshot_clicked();
    void on_GIF_clicked();
    void createGif(QString fileName);
    void update_spinbox(int value);
    void updateHorizontalScrollBarX(int value);
    void updateHorizontalScrollBarY(int value);
    void updateHorizontalScrollBarZ(int value);
    void update_moveScrollBar_x(int value);
    void update_moveScrollBar_y(int value);
    void update_moveScrollBar_z(int value);
    void ScrollBar_scale(int value);


    void horizontal_scroll_edge(int action);

private:
    Ui::MainWindow *ui;
    ModelViewer* openGLWidget;
};

#endif // MAINWINDOW_H
