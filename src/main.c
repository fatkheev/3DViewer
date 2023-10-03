#include "backend.h"

int main() {
    Vertex *vertices;
    Face *faces;
    int num_vertices, num_faces;

    if (parse_obj("model.obj", &vertices, &num_vertices, &faces, &num_faces) != 0) {
        printf("Error parsing obj file\n");
        return 1;
    }

    for (int i = 0; i < num_vertices; i++) {
        printf("Vertex %d: %f %f %f\n", i + 1, vertices[i].x, vertices[i].y, vertices[i].z);
    }

    for (int i = 0; i < num_faces; i++) {
        printf("Face %d: ", i + 1);
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