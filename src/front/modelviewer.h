#ifndef MODELVIEWER_H
#define MODELVIEWER_H
#define GL_SILENCE_DEPRECATION // чтобы игнорировать предупреждения связанные с устаревшими функциями OpenGL



#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QScrollBar>
#include <QTimer>
#include <QMouseEvent>
#include <QPalette>
#include <QColorDialog>

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
    QColor backgroundColor;
    QColor edgeColor;
    double line_edge = 1;

// Сохранение
    void saveSettings();
    void loadSettings();

public slots:
    void on_horizontalScrollBar_xValueChanged(int value);
    void on_horizontalScrollBar_yValueChanged(int value);
    void on_horizontalScrollBar_zValueChanged(int value);
    void on_ScrollBar_scaleValueChanged(int value);

    void on_moveScrollBar_xValueChanged(int value);
    void on_moveScrollBar_yValueChanged(int value);
    void on_moveScrollBar_zValueChanged(int value);
    void applyInertia();
    void set_background_color(const QColor &color);
    void set_edge_color(const QColor &color);
//    void set_vertex_color (const QColor &color);


    void on_ProjectionBox_currentIndexChanged(int index);
    void on_type_edge_activated(int index);

    // Цвета вершин
    void on_type_V_activated(int index);
    void on_horizontal_sccrol_vertice_valueChanged(int value);
    void setVertexColor(const QColor &color);


protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
   void wheelEvent(QWheelEvent *event)override;
private:
    GLuint vertexVBO, indexVBO;
    int num_vertices, num_faces;
    Vertex *vertices = nullptr, *originalVertices = nullptr, *faces = nullptr;
    GLuint *indexes = nullptr;
    int *face_vertex_counts = nullptr;
    float rotationAngleX = 0.0, rotationAngleY = 0.0, rotationAngleZ = 0.0;

    float currentOffsetX = 0.0f;
    float currentOffsetY = 0.0f;
    float currentOffsetZ = 0.0f;

    // Скролл мышью
    bool mousePressed;
    QPoint lastMousePos;
    float inertiaX = 0.0f;
    float inertiaY = 0.0f;
    QTimer *inertiaTimer;

    int currentProjectionType;  // 0 for Perspective, 1 for Orthographic
    int current_type_edge=0;

    // Цвета вершин
    int vertexShape = 0;  // 0: откл., 1: круг, 2: квадрат
    float vertexSize = 0.03f;  // размер вершин
    QColor vertexColor = Qt::white;  // цвет вершин

};

#endif // MODELVIEWER_H
