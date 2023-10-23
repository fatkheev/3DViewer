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
#include "qgifimage.h"


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
    void on_open_file_clicked();
    void on_clean_clicked();
    void on_screenshot_clicked();
    void on_GIF_clicked();
    void create_gif();


    void applySettingsToModel();


    void update_spinbox(int value);
    void updateHorizontalScrollBarX(int value);
    void updateHorizontalScrollBarY(int value);
    void updateHorizontalScrollBarZ(int value);
    void update_moveScrollBar_x(int value);
    void update_moveScrollBar_y(int value);
    void update_moveScrollBar_z(int value);
    void scroll_bar_scale(int value);

    void horizontal_scroll_edge(int action);
    int countUniqueEdges(Face *faces, int num_faces);

private:
    Ui::MainWindow *ui;
    ModelViewer* openGLWidget;
    ModelViewer *modelViewer;

    QGifImage *gif_frame;
      QTimer *timer;
      QString filePat;
      int timecount = 0;


    // Сохранение
    void saveSettings();
    void loadSettings();

    // Для пути файла
    QString lastOpenedFilePath;
};

#endif // MAINWINDOW_H
