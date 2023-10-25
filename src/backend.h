#ifndef BACKEND_H
#define BACKEND_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct {
    float x, y, z;
} Vertex;

typedef struct {
    int *vertices; // указатель на массив индексов вершин
    int num_vertices; // количество вершин в грани
} Face;

FILE* open_file(const char *filename);

// Объявления функций:

// Открытие объектного файла
FILE* open_file(const char *filename);

// Проверка на цифру
int check_digit(const char *str);



// Парсер вершин
void parse_vertex(char *line, Vertex *vertex, float centerX, float centerY, float centerZ, float scaleFactor);

// Парсер граней
void parse_face(char *line, Face *face, int vertexIndex);

// Функция определения максимальных и минимальных значений
void find_extremes(FILE *file, float *maxAbsValue, float *minX, float *minY, float *minZ, float *maxX, float *maxY, float *maxZ);



// Запись точек и граней в массивы
int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Face **faces_out, int *num_faces);




// Поворот модели
void rotate_model(Vertex *vertices, int num_vertices, float angleX, float angleY, float angleZ);
void rotate_vertex(Vertex *vertex, float angleX, float angleY, float angleZ);

// Уменьшение и увеличение
void scale_model(Vertex *vertices, int num_vertices, float scale_factor);
void scale_vertex(Vertex *vertex, float scale_factor);

// Движение объекта по осям
void move_model(Vertex *vertices, int num_vertices, float dx, float dy, float dz);
void move_vertex(Vertex *vertex, float dx, float dy, float dz);

#endif // BACKEND_H