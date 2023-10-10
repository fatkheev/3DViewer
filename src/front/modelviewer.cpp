#include "modelviewer.h"
#include <QOpenGLShaderProgram>

ModelViewer::ModelViewer(QWidget *parent)
    : QOpenGLWidget(parent), vertexVBO(0), indexVBO(0), num_vertices(0), num_faces(0), vertices(nullptr), indexes(nullptr), face_vertex_counts(nullptr)
{
}

ModelViewer::~ModelViewer() {
    delete[] indexes;
    delete[] face_vertex_counts;
}

void ModelViewer::setData(Vertex *vertices, int num_vertices, Face *faces, int num_faces) {
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
        total_face_vertices += face_vertex_counts[i];  // Use previously stored vertex counts per face
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
