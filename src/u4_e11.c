// Week 4. U4: Constants, arrays, strings and structs - Structures
// Exercise 11: Write a program that reads two integer vectors
// of dimension 3. Then, add both vectors and store the sum in 
// a third vector. The program has to print the components of
// the third vector and its euclidean norm. In order to do it,
// declare three arrays, one for each vector. Use a macro to
// define their size.
//
// Create a struct that contains all three vectors and perform
// all operations on the members of this struct.
//
// Note: To calculate the square root you have to use the function
// sqrt() and include the header math.h.
//
// The following is an example of program execution:
//
// ? Enter the first component of the first vector: 2
// ? Enter the second component of the first vector: 3
// ? Enter the third component of the first vector: 4
// ? Enter the first component of the second vector: 6
// ? Enter the second component  of the second vector: 7
// ? Enter the third component of the second vector: 8
// ==> The sum vector is: 8 10 12
// ==> The norm is: 17.549928

#include <stdio.h>
#include <math.h>

#define VECTOR_DIM 3

typedef struct
{
    int vec1[VECTOR_DIM];
    int vec2[VECTOR_DIM];
    int sum_vec[VECTOR_DIM];
} Vectors;

int main() 
{
    Vectors vectors;
    double norm;

    printf("\n\033[32m?\033[0m Enter the first component of the first vector: ");
    scanf("%d", &vectors.vec1[0]);
    printf("\033[32m?\033[0m Enter the second component of the first vector: ");
    scanf("%d", &vectors.vec1[1]);
    printf("\033[32m?\033[0m Enter the third component of the first vector: ");
    scanf("%d", &vectors.vec1[2]);
    printf("\033[32m?\033[0m Enter the first component of the second vector: ");
    scanf("%d", &vectors.vec2[0]);
    printf("\033[32m?\033[0m Enter the second component of the second vector: ");
    scanf("%d", &vectors.vec2[1]);
    printf("\033[32m?\033[0m Enter the third component of the second vector: ");
    scanf("%d", &vectors.vec2[2]);

    vectors.sum_vec[0] = vectors.vec1[0] + vectors.vec2[0];
    vectors.sum_vec[1] = vectors.vec1[1] + vectors.vec2[1];
    vectors.sum_vec[2] = vectors.vec1[2] + vectors.vec2[2];

    norm = sqrt(
        (double)vectors.sum_vec[0] * (double)vectors.sum_vec[0] + 
        (double)vectors.sum_vec[1] * (double)vectors.sum_vec[1] + 
        (double)vectors.sum_vec[2] * (double)vectors.sum_vec[2]
    );

    printf("\033[32m==>\033[0m The sum vector is: %d %d %d\n", vectors.sum_vec[0], vectors.sum_vec[1], vectors.sum_vec[2]);
    printf("\033[32m==>\033[0m The norm is: %lf\n\n", norm);

    return 0;
}
