#ifndef MODELVIEWER_H
#define MODELVIEWER_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QScrollBar>

extern "C" {
#include "../backend.h"
}

class ModelViewer : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit ModelViewer(QWidget *parent = nullptr);
    void setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces);
    void updateVertices();
    ~ModelViewer();
    float scaleFactor = 1.0f;

public slots:
    void on_horizontalScrollBar_xValueChanged(int value);
    void on_horizontalScrollBar_yValueChanged(int value);
    void on_horizontalScrollBar_zValueChanged(int value);
    void on_ScrollBar_scaleValueChanged(int value);

    void on_moveScrollBar_xValueChanged(int value);
    void on_moveScrollBar_yValueChanged(int value);
    void on_moveScrollBar_zValueChanged(int value);


protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    GLuint vertexVBO, indexVBO;
    int num_vertices, num_faces;
    Vertex *vertices = nullptr, *originalVertices = nullptr;
    GLuint *indexes = nullptr;
    int *face_vertex_counts = nullptr;
    float rotationAngleX = 0.0, rotationAngleY = 0.0, rotationAngleZ = 0.0;

    float currentOffsetX = 0.0f;
    float currentOffsetY = 0.0f;
    float currentOffsetZ = 0.0f;
};

#endif // MODELVIEWER_H
