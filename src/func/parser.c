#include "../backend.h"

// Открываем файл для чтения и возвращаем указатель на него.
FILE* open_file(const char *filename) {
    FILE *file = fopen(filename, "r"); // Открыть файл на чтение.
    if (!file) { // Если файл не удалось открыть:
        printf("Failed to open file: %s\n", filename); // Вывести ошибку.
        return NULL; // Вернуть NULL.
    }
    return file; // Вернуть указатель на файл.
}

// Проверяем количество цифр (вершин) в строке.
int check_digit(const char *str) {
    int count = 0;
    char *ptr = (char *)str; // Указатель на начало строки.
    while (*ptr) { // Пока не достигнут конец строки.
        if (*ptr >= '0' && *ptr <= '9') { // Если текущий символ - число.
            count++; // Увеличить счетчик.
            while (*ptr && *ptr != ' ') ptr++; // Пропустить символы до следующего пробела.
        } else {
            ptr++; // Перейти к следующему символу.
        }
    }
    return count + 1; // Возвращаем количество цифр + 1.
}

// Разбор файла .obj и заполнение массивов вершин и граней.
int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Face **faces_out, int *num_faces) {
    FILE *file = open_file(filename); // Открыть файл.
    if (!file) { // Если файл не удалось открыть:
        return -1; // Вернуть ошибку.
    }

    char line[128]; // Массив для текущей строки файла.
    int max_vertices = 1000; // Максимальное количество вершин (изначально).
    int max_faces = 1000; // Максимальное количество граней (изначально).
    Vertex *vertices = malloc(sizeof(Vertex) * max_vertices); // Выделение памяти под вершины.
    Face *faces = malloc(sizeof(Face) * max_faces); // Выделение памяти под грани.
    int vertexIndex = 0; // Текущий индекс вершины.
    int faceIndex = 0; // Текущий индекс грани.
    
    // Начальные значения для определения границ объекта.
    float maxAbsValue = 0.0f;
    float minX = INFINITY, minY = INFINITY, minZ = INFINITY;
    float maxX = -INFINITY, maxY = -INFINITY, maxZ = -INFINITY;

    // Первый проход: определение границ объекта.
    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') { // Если строка содержит вершину.
            Vertex v;
            sscanf(line, "v %f %f %f\n", &v.x, &v.y, &v.z); // Читаем координаты вершины.

            // Определение границ объекта.
            if (fabs(v.x) > maxAbsValue) maxAbsValue = fabs(v.x);
            if (fabs(v.y) > maxAbsValue) maxAbsValue = fabs(v.y);
            if (fabs(v.z) > maxAbsValue) maxAbsValue = fabs(v.z);
            if (v.x > maxX) maxX = v.x;
            if (v.y > maxY) maxY = v.y;
            if (v.z > maxZ) maxZ = v.z;
            if (v.x < minX) minX = v.x;
            if (v.y < minY) minY = v.y;
            if (v.z < minZ) minZ = v.z;
        }
    }

    // Расчет коэффициента масштабирования и центра объекта.
    float scaleFactor = (maxAbsValue > 1.0f) ? (1.0f / maxAbsValue) : 1.0f;
    float centerX = (minX + maxX) / 2.0f;
    float centerY = (minY + maxY) / 2.0f;
    float centerZ = (minZ + maxZ) / 2.0f;

    fseek(file, 0, SEEK_SET); // Возвращаем указатель в начало файла.

    // Второй проход: чтение вершин и граней, масштабирование и центрирование вершин.
    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') { // Если строка содержит вершину.
            if (vertexIndex == max_vertices) { // Если текущее количество вершин достигло максимума.
                max_vertices *= 2; // Удваиваем максимальное количество вершин.
                vertices = realloc(vertices, sizeof(Vertex) * max_vertices); // Выделяем дополнительную память.
            }
            sscanf(line, "v %f %f %f\n", &vertices[vertexIndex].x, &vertices[vertexIndex].y, &vertices[vertexIndex].z); // Читаем координаты вершины.

            // Масштабирование и центрирование вершины.
            vertices[vertexIndex].x = (vertices[vertexIndex].x - centerX) * scaleFactor;
            vertices[vertexIndex].y = (vertices[vertexIndex].y - centerY) * scaleFactor;
            vertices[vertexIndex].z = (vertices[vertexIndex].z - centerZ) * scaleFactor;

            vertexIndex++; // Увеличиваем индекс текущей вершины.
        } else if (line[0] == 'f' && line[1] == ' ') { // Если строка содержит грань.
            int count = check_digit(line) - 1; // Считаем количество вершин в грани.
            int *tempVertices = malloc(sizeof(int) * count); // Выделяем временную память под индексы вершин грани.
            bool validFace = true; // Флаг для проверки корректности грани.

            int i = 0;
            char *token = strtok(line + 2, " "); // Разбиваем строку на токены (индексы вершин).
            while (token != NULL && validFace) { // Пока есть токены и грань считается корректной.
                int idx = strtol(token, NULL, 10); // Преобразуем токен (строку) в число.
                if (idx < 0) { // Если индекс отрицательный, конвертируем его в положительный.
                    idx = vertexIndex + idx + 1;
                }
                // Проверка на корректность индекса вершины.
                if (idx > vertexIndex || idx <= 0) {
                    validFace = false; // Если индекс некорректен, помечаем грань как некорректную.
                } else {
                    tempVertices[i++] = idx; // Если все в порядке, сохраняем индекс вершины.
                }
                token = strtok(NULL, " "); // Переходим к следующему токену.
            }

            if (validFace) { // Если грань корректна:
                if (faceIndex == max_faces) { // Если текущее количество граней достигло максимума.
                    max_faces *= 2; // Удваиваем максимальное количество граней.
                    faces = realloc(faces, sizeof(Face) * max_faces); // Выделяем дополнительную память.
                }
                faces[faceIndex].vertices = tempVertices; // Сохраняем индексы вершин в грани.
                faces[faceIndex].num_vertices = count; // Сохраняем количество вершин в грани.
                faceIndex++; // Увеличиваем индекс текущей грани.
            } else {
                free(tempVertices); // Если грань некорректна, освобождаем выделенную память.
            }
        }
    }

    fclose(file); // Закрываем файл.

    *vertices_out = vertices; // Возвращаем массив вершин.
    *faces_out = faces; // Возвращаем массив граней.
    *num_vertices = vertexIndex; // Возвращаем общее количество вершин.
    *num_faces = faceIndex; // Возвращаем общее количество граней.

    return 0; // Возвращаем успешное выполнение.
}

// Поворот объекта
void rotate_model(Vertex *vertices, int num_vertices, float angleX, float angleY, float angleZ) {
    for (int i = 0; i < num_vertices; i++) {
        rotate_vertex(&vertices[i], angleX, angleY, angleZ);
    }
}

void rotate_vertex(Vertex *vertex, float angleX, float angleY, float angleZ) {
    float newY = vertex->y * cos(angleX) - vertex->z * sin(angleX);
    float newZ = vertex->y * sin(angleX) + vertex->z * cos(angleX);
    vertex->y = newY;
    vertex->z = newZ;

    float newX = vertex->x * cos(angleY) + vertex->z * sin(angleY);
    newZ = -vertex->x * sin(angleY) + vertex->z * cos(angleY);
    vertex->x = newX;
    vertex->z = newZ;

    newX = vertex->x * cos(angleZ) - vertex->y * sin(angleZ);
    newY = vertex->x * sin(angleZ) + vertex->y * cos(angleZ);
    vertex->x = newX;
    vertex->y = newY;
}

void scale_model(Vertex *vertices, int num_vertices, float scale_factor) {
    for (int i = 0; i < num_vertices; i++) {
        vertices[i].x *= scale_factor;
        vertices[i].y *= scale_factor;
        vertices[i].z *= scale_factor;
    }
}

void scale_vertex(Vertex *vertex, float scale_factor) {
    vertex->x *= scale_factor;
    vertex->y *= scale_factor;
    vertex->z *= scale_factor;
}

// Движение объекта по осям
void move_model(Vertex *vertices, int num_vertices, float dx, float dy, float dz) {
    for (int i = 0; i < num_vertices; i++) {
        vertices[i].x += dx;
        vertices[i].y += dy;
        vertices[i].z += dz;
    }
}
void move_vertex(Vertex *vertex, float dx, float dy, float dz) {
    vertex->x += dx;
    vertex->y += dy;
    vertex->z += dz;
}