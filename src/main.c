#include "backend.h"

int main() {
    Vertex *vertices;
    Faces *faces;
    int num_vertices, num_faces;

    if (parse_obj("model.obj", &vertices, &num_vertices, &faces, &num_faces) != 0) {
        printf("Ошибка открытия obj файла\n");
        return 1;
    }

    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %f %f %f\n", i + 1, vertices[i].x, vertices[i].y, vertices[i].z);
    }

    for (int i = 0; i < num_faces; i++) {
        printf("Face %d: %d %d %d\n", i + 1, faces[i].v1, faces[i].v2, faces[i].v3);
    }

    free(vertices);
    free(faces);

    return 0;
}
