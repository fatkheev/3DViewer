#include "backend.h"

int main() {
    Vertex *vertices;
    Face *faces;
    int num_vertices, num_faces;

    if (parse_obj("model.obj", &vertices, &num_vertices, &faces, &num_faces) != 0) {
        printf("Error parsing obj file\n");
        return 1;
    }

    printf("Оригинальные вершины:\n");
    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %f %f %f\n", i + 1, vertices[i].x, vertices[i].y, vertices[i].z);
    }

    // Повернем модель на 45 градусов вокруг всех трех осей
    rotate_model(vertices, num_vertices, M_PI/4, M_PI/4, M_PI/4);

    printf("\nВершины после поворота:\n");
    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %f %f %f\n", i + 1, vertices[i].x, vertices[i].y, vertices[i].z);
    }

    for (int i = 0; i < num_faces; i++) {
        printf("Фасет %d: ", i + 1);
        for (int j = 0; j < faces[i].num_vertices; j++) {
            printf("%d ", faces[i].vertices[j]);
        }
        printf("\n");
        free(faces[i].vertices);
    }

    free(vertices);
    free(faces);

    return 0;
}
