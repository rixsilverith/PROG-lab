// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 10: Write a program that uses nested loops to 
// calculate the sum of two 3x3 matrices of integers.
//
// The matrices will be initialized in the declaration, it is not
// necessary to read them from the keyboard.
//
// The program must display the result matrix on the screen.

#include <stdio.h>

#define MATRIX_ORDER 3

int main()
{
    unsigned int i, j;
    int A[MATRIX_ORDER][MATRIX_ORDER] = {{4, 5, 6}, {3, -5, 1}, {8, 0, -2}}, 
        B[MATRIX_ORDER][MATRIX_ORDER] = {{-9, 7, 14}, {-8, 15, 6}, {2, 5, 1}},
        C[MATRIX_ORDER][MATRIX_ORDER];

    printf("\n\033[1m\033[32m-->\033[0m The sum of the matrices A + B is the matrix C:");

    for (i = 0; i < MATRIX_ORDER; i++) {
        for (j = 0; j < MATRIX_ORDER; j++)
            C[i][j] = A[i][j] + B[i][j];

        printf("\n%d %d %d", C[i][0], C[i][1], C[i][2]);
    }

    printf("\n");
    return 0;
}
