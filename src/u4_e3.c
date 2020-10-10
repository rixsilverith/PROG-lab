// Week 4. U4: Constants, arrays, strings and structs - Arrays
// Exercise 3: Write a program that calculates the determinant
// of a 3x3 matrix of integers.
//
// The values of the matrix DO NOT have to be read by keyboard.
// Instead, initialize it with the following values when
// declaring:
//
// 1 2 1
// 1 1 2
// 3 0 3

#include <stdio.h>

#define MATRIX_ORDER 3

int main()
{
    int matrix[MATRIX_ORDER][MATRIX_ORDER] = {{1, 2, 1}, {1, 1, 2}, {3, 0, 3}}, detM;

    // The determinant of a third order matrix can be easily 
    // calculated using the 'Sarrus' rule'. We could also 
    // develop the determinant by adjacents, but it's a bit 
    // more of work and I'm not in the mood...
    detM = (
        matrix[0][0] * matrix[1][1] * matrix[2][2] +
        matrix[1][0] * matrix[2][1] * matrix[0][2] +
        matrix[0][1] * matrix[1][2] * matrix[2][0] -
        matrix[0][2] * matrix[1][1] * matrix[2][0] -
        matrix[1][0] * matrix[0][1] * matrix[2][2] -
        matrix[2][1] * matrix[1][2] * matrix[0][0]
    );

    printf("            ┌       ┐\n");
    printf("            | %d %d %d |\n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("\033[32m==>\033[0m Let M = | %d %d %d |\n", matrix[1][0], matrix[1][1], matrix[1][2]);
    printf("            | %d %d %d |\n", matrix[2][0], matrix[2][1], matrix[2][2]);
    printf("            └       ┘\n");
   
    printf("\033[32m==>\033[0m Then, │M│ = %d\n", detM);
    return 0;
}
