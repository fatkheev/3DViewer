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


    void set_color_background();

    void update_spinbox(int value);


    void updateHorizontalScrollBarX(int value);
    void updateHorizontalScrollBarY(int value);
    void updateHorizontalScrollBarZ(int value);


    void update_moveScrollBar_x(int value);
    void update_moveScrollBar_y(int value);
    void update_moveScrollBar_z(int value);

    void ScrollBar_scale(int value);


  //  void on_spinBox_textChanged(const QString &arg1);



private:
    Ui::MainWindow *ui;
    ModelViewer* openGLWidget;  // Используйте ModelViewer вместо QOpenGLWidget
};

#endif // MAINWINDOW_H
