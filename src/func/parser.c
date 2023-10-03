#include "../backend.h"

FILE* open_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Failed to open file: %s\n", filename);
        return NULL;
    }
    return file;
}

int parse_obj(const char *filename, Vertex **vertices_out, int *num_vertices, Faces **faces_out, int *num_faces) {
    FILE *file = open_file(filename);
    if (!file) {
        return -1;
    }

    char line[128];
    int max_vertices = 1000;
    int max_faces = 1000;
    Vertex *vertices = malloc(sizeof(Vertex) * max_vertices);
    Faces *faces = malloc(sizeof(Faces) * max_faces);
    int vertexIndex = 0;
    int faceIndex = 0;

    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') {
            if (vertexIndex == max_vertices) {
                max_vertices *= 2;
                Vertex *new_vertices = malloc(sizeof(Vertex) * max_vertices);
                for (int i = 0; i < vertexIndex; i++) {
                    new_vertices[i] = vertices[i];
                }
                free(vertices);
                vertices = new_vertices;
            }
            sscanf(line, "v %f %f %f\n", &vertices[vertexIndex].x, &vertices[vertexIndex].y, &vertices[vertexIndex].z);
            vertexIndex++;
        } else if (line[0] == 'f' && line[1] == ' ') {
            if (faceIndex == max_faces) {
                max_faces *= 2;
                Faces *new_faces = malloc(sizeof(Faces) * max_faces);
                for (int i = 0; i < faceIndex; i++) {
                    new_faces[i] = faces[i];
                }
                free(faces);
                faces = new_faces;
            }
            sscanf(line, "f %d %d %d\n", &faces[faceIndex].v1, &faces[faceIndex].v2, &faces[faceIndex].v3);
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