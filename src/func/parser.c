#ifdef __cplusplus
extern "C" {
#endif

#include "../backend.h"

FILE* open_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Failed to open file: %s\n", filename);
        return NULL;
    }
    return file;
}

int count_numbers_in_string(const char *str) {
    int count = 0;
    char *ptr = (char *)str;
    while (*ptr) {
        if (*ptr >= '0' && *ptr <= '9') { // если текущий символ - число
            count++;
            while (*ptr && *ptr >= '0' && *ptr <= '9') ptr++; // пропускаем все следующие цифры
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

    while (fgets(line, sizeof(line), file)) {
        if (line[0] == 'v' && line[1] == ' ') {
            if (vertexIndex == max_vertices) {
                max_vertices *= 2;
                vertices = realloc(vertices, sizeof(Vertex) * max_vertices);
            }
            sscanf(line, "v %f %f %f\n", &vertices[vertexIndex].x, &vertices[vertexIndex].y, &vertices[vertexIndex].z);
            vertexIndex++;
        } else if (line[0] == 'f' && line[1] == ' ') {
            if (faceIndex == max_faces) {
                max_faces *= 2;
                faces = realloc(faces, sizeof(Face) * max_faces);
            }

            int count = count_numbers_in_string(line) - 1;
            faces[faceIndex].vertices = malloc(sizeof(int) * count);
            faces[faceIndex].num_vertices = count;

            int i = 0;
            char *token = strtok(line + 2, " ");  // пропустить символ 'f' и пробел
            while (token != NULL) {
                faces[faceIndex].vertices[i++] = strtol(token, NULL, 10);
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

#ifdef __cplusplus
}
#endif