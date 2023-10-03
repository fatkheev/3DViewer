#include <stdio.h>
#include <stdlib.h>

// Структуры для хранения

typedef struct {
    float x, y, z;
} Vertex;

typedef struct {
    int v1, v2, v3;
} Faces;

// Объявления функций:

// Открытие объектного файла
FILE* open_file(const char *filename);

// Запись точек и граней в массивы
int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Faces **faces_out, int *num_faces);