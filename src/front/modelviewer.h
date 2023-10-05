#ifndef MODELVIEWER_H
#define MODELVIEWER_H

#include "mainwindow.h"
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

class ModelViewer : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit ModelViewer(QWidget *parent = nullptr);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif // MODELVIEWER_H
