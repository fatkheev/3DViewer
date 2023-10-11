#include "modelviewer.h"
#include <QOpenGLShaderProgram>

ModelViewer::ModelViewer(QWidget *parent)
    : QOpenGLWidget(parent), vertexVBO(0), indexVBO(0), num_vertices(0), num_faces(0),
      vertices(nullptr), indexes(nullptr), face_vertex_counts(nullptr),
      rotationAngleX(0.0f), rotationAngleY(0.0f), rotationAngleZ(0.0f)  // инициализация углов
{
}

ModelViewer::~ModelViewer() {
    delete[] indexes;
    delete[] face_vertex_counts;
    delete[] originalVertices;
}

void ModelViewer::setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces) {
    this->originalVertices = new Vertex[num_vertices];
    memcpy(this->originalVertices, vertices, num_vertices * sizeof(Vertex));
    this->vertices = vertices;
    this->num_vertices = num_vertices;
    this->num_faces = num_faces;

    int total_face_vertices = 0;
    for (int i = 0; i < num_faces; ++i) {
        total_face_vertices += faces[i].num_vertices;
    }

    this->indexes = new GLuint[total_face_vertices];
    this->face_vertex_counts = new int[num_faces];

    int idx = 0;
    for (int i = 0; i < num_faces; ++i) {
        face_vertex_counts[i] = faces[i].num_vertices;
        for (int j = 0; j < faces[i].num_vertices; ++j) {
            this->indexes[idx++] = faces[i].vertices[j] - 1;
        }
    }

    initializeGL();
    update();
    if (originalVertices) {
            delete[] originalVertices;
        }

        originalVertices = new Vertex[num_vertices];
        memcpy(originalVertices, vertices, sizeof(Vertex) * num_vertices);
}

void ModelViewer::initializeGL() {
    initializeOpenGLFunctions();

    glGenBuffers(1, &vertexVBO);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);

    glGenBuffers(1, &indexVBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexVBO);
    int total_face_vertices = 0;
    for (int i = 0; i < num_faces; ++i) {
        total_face_vertices += face_vertex_counts[i];
    }
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, total_face_vertices * sizeof(GLuint), indexes, GL_STATIC_DRAW);
}

void ModelViewer::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void ModelViewer::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexVBO);

    int start_idx = 0;
    for (int i = 0; i < num_faces; ++i) {
        glDrawElements(GL_LINE_LOOP, face_vertex_counts[i], GL_UNSIGNED_INT, (void*)(start_idx * sizeof(GLuint)));
        start_idx += face_vertex_counts[i];
    }

    glDisableVertexAttribArray(0);
}

// Сохранение позиции и размеров
void ModelViewer::updateVertices() {
    // Копируем исходные вершины
    memcpy(vertices, originalVertices, num_vertices * sizeof(Vertex));

    // Применяем операции
    rotate_model(vertices, num_vertices, rotationAngleX, rotationAngleY, rotationAngleZ);
    scale_model(vertices, num_vertices, scaleFactor);
    move_model(vertices, num_vertices, currentOffsetX, currentOffsetY, currentOffsetZ);
}


// Ротате
void ModelViewer::on_horizontalScrollBar_xValueChanged(int value) {
    float newAngleX = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, newAngleX - rotationAngleX, 0.0f, 0.0f);
    rotationAngleX = newAngleX;

    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_horizontalScrollBar_yValueChanged(int value) {
    float newAngleY = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, 0.0f, newAngleY - rotationAngleY, 0.0f);
    rotationAngleY = newAngleY;

    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_horizontalScrollBar_zValueChanged(int value) {
    float newAngleZ = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, 0.0f, 0.0f, newAngleZ - rotationAngleZ);
    rotationAngleZ = newAngleZ;

    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}


//Скейл
void ModelViewer::on_ScrollBar_scaleValueChanged(int value) {
    scaleFactor = exp((value - 100) / 50.0);
    updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

// Движение объекта по осям
void ModelViewer::on_moveScrollBar_xValueChanged(int value) {
    float targetOffset = value * 0.01f;
    float difference = targetOffset - currentOffsetX;
    currentOffsetX = targetOffset;

    move_model(vertices, num_vertices, difference, 0, 0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_moveScrollBar_yValueChanged(int value) {
    float targetOffset = value * 0.01f;
    float difference = targetOffset - currentOffsetY;
    currentOffsetY = targetOffset;

    move_model(vertices, num_vertices, 0, difference, 0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_moveScrollBar_zValueChanged(int value) {
    float targetOffset = value * 0.01f;
    float difference = targetOffset - currentOffsetZ;
    currentOffsetZ = targetOffset;

    move_model(vertices, num_vertices, 0, 0, difference);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}
