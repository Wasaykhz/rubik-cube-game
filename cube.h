#ifndef CUBE_H
#define CUBE_H

// Cube structure definition
typedef struct {
    // Define cube properties here
} Cube;

// Function prototypes
Cube* create_cube();
void scramble(Cube* cube);
void rotate_face(Cube* cube, int face, int clockwise);
void print_cube(Cube* cube);

#endif // CUBE_H