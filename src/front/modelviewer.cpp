#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include "modelviewer.h"

extern "C" {
    #include "../backend.h"
}

class ModelViewer : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    ModelViewer(QWidget *parent = nullptr)
        : QOpenGLWidget(parent) {}

    void setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces) {
        // Здесь сохраняем данные для последующего использования в paintGL
    }

protected:
    void initializeGL() override {
        initializeOpenGLFunctions();
        // Здесь инициализируем OpenGL, создаем шейдеры и т.д.
    }

    void resizeGL(int w, int h) override {
        Q_UNUSED(w);
        Q_UNUSED(h);
    }

    void paintGL() override {
        // Здесь рендерим вашу модель
    }
};
