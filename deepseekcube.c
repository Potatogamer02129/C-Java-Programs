#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <string.h>

#define WIDTH 80
#define HEIGHT 40
#define PI 3.14159265358979323846
#define DELAY 50000 // Delay in microseconds

typedef struct {
    float x, y, z;
} Point3D;

typedef struct {
    int x, y;
} Point2D;

Point3D cube[] = {
    {-1, -1, -1}, {1, -1, -1}, {1, 1, -1}, {-1, 1, -1},
    {-1, -1, 1}, {1, -1, 1}, {1, 1, 1}, {-1, 1, 1}
};

int faces[6][4] = {
    {0, 1, 2, 3}, // Front face
    {4, 5, 6, 7}, // Back face
    {0, 1, 5, 4}, // Bottom face
    {2, 3, 7, 6}, // Top face
    {0, 3, 7, 4}, // Left face
    {1, 2, 6, 5}  // Right face
};

char faceChars[] = {'#', '*', '.', ':', '-', '+'}; // Different characters for each face

void rotateX(Point3D *p, float angle) {
    float y = p->y;
    float z = p->z;
    p->y = y * cos(angle) - z * sin(angle);
    p->z = y * sin(angle) + z * cos(angle);
}

void rotateY(Point3D *p, float angle) {
    float x = p->x;
    float z = p->z;
    p->x = x * cos(angle) + z * sin(angle);
    p->z = -x * sin(angle) + z * cos(angle);
}

void rotateZ(Point3D *p, float angle) {
    float x = p->x;
    float y = p->y;
    p->x = x * cos(angle) - y * sin(angle);
    p->y = x * sin(angle) + y * cos(angle);
}

Point2D project(Point3D p) {
    float scale = 15.0; // Adjust scaling to fit the screen
    float distance = 5.0;
    float fov = WIDTH / 2 / tan(PI / 4);
    float x = p.x * fov / (p.z + distance) * scale + WIDTH / 2;
    float y = p.y * fov / (p.z + distance) * scale + HEIGHT / 2;
    return (Point2D){(int)x, (int)y};
}

void drawFace(Point3D *cube, int faceIndex, char buffer[HEIGHT][WIDTH], char ch) {
    Point2D points[4];
    for (int i = 0; i < 4; i++) {
        points[i] = project(cube[faces[faceIndex][i]]);
    }

    // Fill the face using a simple polygon filling algorithm
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            int inside = 0;
            for (int i = 0, j = 3; i < 4; j = i++) {
                if (((points[i].y > y) != (points[j].y > y)) &&
                    (x < (points[j].x - points[i].x) * (y - points[i].y) / (points[j].y - points[i].y) + points[i].x)) {
                    inside = !inside;
                }
            }
            if (inside && y >= 0 && y < HEIGHT && x >= 0 && x < WIDTH) {
                buffer[y][x] = ch;
            }
        }
    }
}

void clearBuffer(char buffer[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            buffer[y][x] = ' ';
        }
    }
}

void renderBuffer(char buffer[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            putchar(buffer[y][x]);
        }
        putchar('\n');
    }
}

int main() {
    char buffer[HEIGHT][WIDTH];
    float angleX = 0, angleY = 0, angleZ = 0;

    while (1) {
        clearBuffer(buffer);

        for (int i = 0; i < 8; i++) {
            rotateX(&cube[i], angleX);
            rotateY(&cube[i], angleY);
            rotateZ(&cube[i], angleZ);
        }

        // Draw each face with a different character
        for (int i = 0; i < 6; i++) {
            drawFace(cube, i, buffer, faceChars[i]);
        }

        renderBuffer(buffer);

        angleX += 0.03;
        angleY += 0.02;
        angleZ += 0.01;

        usleep(DELAY); // Control speed
        printf("\033[H\033[J"); // Clear the terminal
    }

    return 0;
}