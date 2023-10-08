#ifndef BACKEND_H
#define BACKEND_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

// Запись точек и граней в массивы
int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Face **faces_out, int *num_faces);

#endif // BACKEND_H