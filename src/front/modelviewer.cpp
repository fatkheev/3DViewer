#include "modelviewer.h"
#include <QOpenGLShaderProgram>
#include <QSettings>

ModelViewer::ModelViewer(QWidget *parent)
    : QOpenGLWidget(parent), vertexVBO(0), indexVBO(0), num_vertices(0), num_faces(0),
      vertices(nullptr), indexes(nullptr), face_vertex_counts(nullptr),
      rotationAngleX(0.0f), rotationAngleY(0.0f), rotationAngleZ(0.0f), currentProjectionType(0)  // инициализация углов
{
    inertiaTimer = new QTimer(this);
    connect(inertiaTimer, &QTimer::timeout, this, &ModelViewer::applyInertia);
    inertiaTimer->start(16);  // обновляем примерно 60 раз в секунду

    loadSettings();
}

ModelViewer::~ModelViewer() {
    saveSettings();
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
    glClearColor(backgroundColor.redF(), backgroundColor.greenF(),
                 backgroundColor.blueF(), backgroundColor.alphaF());

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Установка проекционной матрицы
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (currentProjectionType == 0) {
        glOrtho(-1.5, 1.5, -1.5, 1.5, -2, 1000);
    } else {
        glFrustum(-1, 1, -1, 1, 1, 99999);
        glTranslatef(0, 0, -2.8);
    }

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexVBO);

    int start_idx = 0;
    for (int i = 0; i < num_faces; ++i) {
        if (current_type_edge == 1) {
            glEnable(GL_LINE_STIPPLE);
            glLineStipple(1, 0x00FF);
        } else {
            glDisable(GL_LINE_STIPPLE);
        }

        glLineWidth(this->line_edge);
        glColor3f(edgeColor.redF(), edgeColor.greenF(), edgeColor.blueF());
        glDrawElements(GL_LINE_LOOP, face_vertex_counts[i], GL_UNSIGNED_INT, (void*)(start_idx * sizeof(GLuint)));
        start_idx += face_vertex_counts[i];
    }

    // Рисование вершин
    glColor3f(vertexColor.redF(), vertexColor.greenF(), vertexColor.blueF());
    glPointSize(vertexSize * 50);  // Множитель для размера, можно настроить
    switch(vertexShape) {
        case 0:  // Откл.
            break;
        case 1:  // Круг
            for (int i = 0; i < num_vertices; ++i) {
                glBegin(GL_POLYGON);
                for (int j = 0; j < 360; j += 10) {
                    float degInRad = j * M_PI / 180.0f;
                    glVertex3f(vertices[i].x + cos(degInRad) * vertexSize,
                               vertices[i].y + sin(degInRad) * vertexSize,
                               vertices[i].z);
                }
                glEnd();
            }
            break;
        case 2:  // Квадрат
            for (int i = 0; i < num_vertices; ++i) {
                glBegin(GL_QUADS);
                glVertex3f(vertices[i].x - vertexSize, vertices[i].y - vertexSize, vertices[i].z);
                glVertex3f(vertices[i].x + vertexSize, vertices[i].y - vertexSize, vertices[i].z);
                glVertex3f(vertices[i].x + vertexSize, vertices[i].y + vertexSize, vertices[i].z);
                glVertex3f(vertices[i].x - vertexSize, vertices[i].y + vertexSize, vertices[i].z);
                glEnd();
            }
            break;
    }
}


// Сохранение позиции и размеров
void ModelViewer::updateVertices() {
    // Копируем исходные вершины
    memcpy(vertices, originalVertices, num_vertices * sizeof(Vertex));

    // Применяем смещение
    move_model(vertices, num_vertices, currentOffsetX, currentOffsetY, currentOffsetZ);

    // Применяем масштабирование
    scale_model(vertices, num_vertices, scaleFactor);

    // Применяем поворот
    rotate_model(vertices, num_vertices, rotationAngleX, rotationAngleY, rotationAngleZ);
}


// Ротате
void ModelViewer::on_horizontalScrollBar_xValueChanged(int value) {


    float newAngleX = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, newAngleX - rotationAngleX, 0.0f, 0.0f);
    rotationAngleX = newAngleX;
updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_horizontalScrollBar_yValueChanged(int value) {
    float newAngleY = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, 0.0f, newAngleY - rotationAngleY, 0.0f);
    rotationAngleY = newAngleY;
updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_horizontalScrollBar_zValueChanged(int value) {
    float newAngleZ = static_cast<float>(value) * M_PI / 180.0f;
    rotate_model(vertices, num_vertices, 0.0f, 0.0f, newAngleZ - rotationAngleZ);
    rotationAngleZ = newAngleZ;
updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}


//Скейл
void ModelViewer::on_ScrollBar_scaleValueChanged(int value) {
    scaleFactor = exp((value - 100) / 50.0);

    // Применяем все преобразования
    updateVertices();

    // Обновляем VBO
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
    updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_moveScrollBar_yValueChanged(int value) {
    float targetOffset = value * 0.01f;
    float difference = targetOffset - currentOffsetY;
    currentOffsetY = targetOffset;

    move_model(vertices, num_vertices, 0, difference, 0);
    updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

void ModelViewer::on_moveScrollBar_zValueChanged(int value) {
    currentOffsetZ = value * 0.01f;

    // Применяем все преобразования
    updateVertices();

    // Обновляем VBO
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

// Ротате мышью
void ModelViewer::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        mousePressed = true;
        lastMousePos = event->pos();
    }
}

void ModelViewer::applyInertia() {
    if (fabs(inertiaX) > 0.01f || fabs(inertiaY) > 0.01f) {
        rotationAngleX += inertiaY;
        rotationAngleY += inertiaX;

        // Постепенно уменьшаем инерцию
        inertiaX *= 0.90f;
        inertiaY *= 0.90f;

        updateVertices();

        glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
        glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
        update();
    }
}

void ModelViewer::mouseMoveEvent(QMouseEvent *event) {

    if (event->buttons() & Qt::LeftButton) {
        int dx = event->position().x() - lastMousePos.x();
        int dy = event->position().y() - lastMousePos.y();

        // Уменьшаем скорость вращения
        float rotationDX = dx * 0.003f;
        float rotationDY = dy * 0.003f;

        rotationAngleX += rotationDY;
        rotationAngleY += rotationDX;

        // Сохраняем движение мыши для инерции
        inertiaX = rotationDX;
        inertiaY = rotationDY;

        updateVertices();

        glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
        glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
        update();
    }

    lastMousePos = event->pos();
}

void ModelViewer::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        mousePressed = false;
    }
}


// работа с цветом
void ModelViewer::set_background_color(const QColor &color)
{
        QColor clearColor = color;  // Создаем копию цвета
        clearColor.setAlpha(255);  // Устанавливаем альфа-канал на полную непрозрачность
        glClearColor(clearColor.redF(), clearColor.greenF(), clearColor.blueF(), clearColor.alphaF());
        backgroundColor = color;  // Сохраняем цвет фона
        update();  // Запускаем перерисовку OpenGL виджета
  }

void ModelViewer:: set_edge_color(const QColor &color) {
    edgeColor=color;
    update();
}

//void ModelViewer :: set_vertex_color (const QColor &color) {
//    qDebug() << "ok";
//    //добавить цвета вершин

//}

void ModelViewer::on_ProjectionBox_currentIndexChanged(int index)
{
    currentProjectionType = index;  // 0 for Perspective, 1 for Orthographic
    update();  // обновляем сцену, чтобы увидеть изменения
}

void ModelViewer::on_type_edge_activated(int index)
{
    current_type_edge=index;
    update();
}


// скрол колесиком мыши
void ModelViewer::wheelEvent(QWheelEvent *event) {
    int delta = event->angleDelta().y();

    if (delta > 0) {
        scaleFactor *= 1.1;
    } else if (delta < 0) {
        scaleFactor /= 1.1;
    }
    updateVertices();
    glBindBuffer(GL_ARRAY_BUFFER, vertexVBO);
    glBufferData(GL_ARRAY_BUFFER, num_vertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);
    update();
}

// Цвета вершин
void ModelViewer::on_type_V_activated(int index) {
    vertexShape = index;
    update();
}

void ModelViewer::on_horizontal_sccrol_vertice_valueChanged(int value) {
    vertexSize = value * 0.01f;  // Можно настроить коэффициент масштабирования по своему усмотрению
    update();
}

void ModelViewer::setVertexColor(const QColor &color) {
    vertexColor = color;
    update();
}

// Сохранение
void ModelViewer::saveSettings() {
    QSettings settings("YourOrganization", "YourApp");

    settings.beginGroup("ModelViewer");

    // Настройки вида
    settings.setValue("currentProjectionType", currentProjectionType);
    settings.setValue("backgroundColor", backgroundColor);
    settings.setValue("edgeColor", edgeColor);

    settings.setValue("vertexColor", vertexColor);
    settings.setValue("edgeColor", edgeColor);

    settings.endGroup();
}

void ModelViewer::loadSettings() {
    QSettings settings("YourOrganization", "YourApp");

    settings.beginGroup("ModelViewer");

    // Настройки вида
    currentProjectionType = settings.value("currentProjectionType", 0).toInt();
    backgroundColor = settings.value("backgroundColor", QColor(Qt::black)).value<QColor>();
    edgeColor = settings.value("edgeColor", QColor(Qt::white)).value<QColor>();

    vertexColor = settings.value("vertexColor", QColor(Qt::white)).value<QColor>();
    edgeColor = settings.value("edgeColor", QColor(Qt::white)).value<QColor>();

    settings.endGroup();
}
