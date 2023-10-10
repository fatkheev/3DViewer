#ifndef MODELVIEWER_H
#define MODELVIEWER_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>

extern "C" {
#include "../backend.h"
}

class ModelViewer : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit ModelViewer(QWidget *parent = nullptr);
    void setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces);
    ~ModelViewer();

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

private:
    GLuint vertexVBO, indexVBO;
    int num_vertices, num_faces;
    Vertex* vertices;
    GLuint* indexes;
    int *face_vertex_counts;
};

#endif // MODELVIEWER_H
