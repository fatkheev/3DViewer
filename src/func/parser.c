#include "../backend.h"

FILE* open_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Failed to open file: %s\n", filename);
        return NULL;
    }
    return file;
}

int check_digit(const char *str) {
    int count = 0;
    char *ptr = (char *)str;
    while (*ptr) {
        if (*ptr >= '0' && *ptr <= '9') { // если текущий символ - число
            count++;
            while (*ptr && *ptr != ' ') ptr++; // пропускаем все символы до следующего пробела
        } else {
            ptr++;
        }
    }
    return count + 1;
}

int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Face **faces_out, int *num_faces) {
    FILE *file = open_file(filename);
    if (!file) {
        return -1;
    }

    char line[128];
    int max_vertices = 1000;
    int max_faces = 1000;
    Vertex *vertices = malloc(sizeof(Vertex) * max_vertices);
    Face *faces = malloc(sizeof(Face) * max_faces);
    int vertexIndex = 0;
    int faceIndex = 0;

    float maxAbsValue = 0.0f;
    float minX = INFINITY, minY = INFINITY, minZ = INFINITY;
    float maxX = -INFINITY, maxY = -INFINITY, maxZ = -INFINITY;

    // Первый проход: определение границ и нахождение maxAbsValue
    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') {
            Vertex v;
            sscanf(line, "v %f %f %f\n", &v.x, &v.y, &v.z);

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

    float scaleFactor = (maxAbsValue > 1.0f) ? (1.0f / maxAbsValue) : 1.0f;
    float centerX = (minX + maxX) / 2.0f;
    float centerY = (minY + maxY) / 2.0f;
    float centerZ = (minZ + maxZ) / 2.0f;

    fseek(file, 0, SEEK_SET);  // Вернемся к началу файла

    // Второй проход: масштабирование и центрирование вершин, заполнение массивов
    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') {
            if (vertexIndex == max_vertices) {
                max_vertices *= 2;
                vertices = realloc(vertices, sizeof(Vertex) * max_vertices);
            }
            sscanf(line, "v %f %f %f\n", &vertices[vertexIndex].x, &vertices[vertexIndex].y, &vertices[vertexIndex].z);

            vertices[vertexIndex].x = (vertices[vertexIndex].x - centerX) * scaleFactor;
            vertices[vertexIndex].y = (vertices[vertexIndex].y - centerY) * scaleFactor;
            vertices[vertexIndex].z = (vertices[vertexIndex].z - centerZ) * scaleFactor;

            vertexIndex++;
        } else if (line[0] == 'f' && line[1] == ' ') {
            if (faceIndex == max_faces) {
                max_faces *= 2;
                faces = realloc(faces, sizeof(Face) * max_faces);
            }

            int count = check_digit(line) - 1;
            faces[faceIndex].vertices = malloc(sizeof(int) * count);
            faces[faceIndex].num_vertices = count;

            int i = 0;
            char *token = strtok(line + 2, " ");
            while (token != NULL) {
                int idx = strtol(token, NULL, 10);
                if (idx < 0) {
                    idx = vertexIndex + idx + 1;
                }
                faces[faceIndex].vertices[i++] = idx;
                token = strtok(NULL, " ");
            }
            faceIndex++;
        }
    }

    fclose(file);

    *vertices_out = vertices;
    *faces_out = faces;
    *num_vertices = vertexIndex;
    *num_faces = faceIndex;

    return 0;
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