#include "modelviewer.h"
#include <QOpenGLShaderProgram>

ModelViewer::ModelViewer(QWidget *parent)
    : QOpenGLWidget(parent), vertexVBO(0), indexVBO(0), num_vertices(0), num_faces(0), vertices(nullptr), indexes(nullptr)
{
}

void ModelViewer::setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces) {
    this->vertices = vertices;
    this->num_vertices = num_vertices;
    this->num_faces = num_faces;

    // Создаем массив индексов
    this->indexes = new GLuint[num_faces * 3];
    for (int i = 0; i < num_faces; ++i) {
        if (faces[i].num_vertices == 3) {
            this->indexes[i * 3] = faces[i].vertices[0] - 1;
            this->indexes[i * 3 + 1] = faces[i].vertices[1] - 1;
            this->indexes[i * 3 + 2] = faces[i].vertices[2] - 1;
        }
    }

    initializeGL();
    update();
}

void ModelViewer::initializeGL() {
    initializeOpenGLFunctions();

    glGenBuffers(1, &vertexVBO);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);

    glGenBuffers(1, &indexVBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexVBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, num_faces * 3 * sizeof(GLuint), indexes, GL_STATIC_DRAW);
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
    glDrawElements(GL_LINES, num_faces * 3, GL_UNSIGNED_INT, nullptr);

    glDisableVertexAttribArray(0);
}
