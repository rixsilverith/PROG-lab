// Week 4. U4: Constants, arrays, strings and structs - Arrays
// Exercise 2: Write a program that reads two integer vectors
// of dimension 3. Then, add both vectors and store the sum in 
// a third vector. The program has to print the components of
// the third vector and its euclidean norm. In order to do it,
// declare three arrays, one for each vector. Use a macro to
// define their size.
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

#define ARRAY_SIZE 3

int main() 
{
    int vector1[ARRAY_SIZE], vector2[ARRAY_SIZE], sum_vector[ARRAY_SIZE];
    double norm;

    printf("\033[32m?\033[0m Enter the first component of the first vector: ");
    scanf("%d", &vector1[0]);
    printf("\033[32m?\033[0m Enter the second component of the first vector: ");
    scanf("%d", &vector1[1]);
    printf("\033[32m?\033[0m Enter the third component of the first vector: ");
    scanf("%d", &vector1[2]);
    printf("\033[32m?\033[0m Enter the first component of the second vector: ");
    scanf("%d", &vector2[0]);
    printf("\033[32m?\033[0m Enter the second component of the second vector: ");
    scanf("%d", &vector2[1]);
    printf("\033[32m?\033[0m Enter the third component of the second vector: ");
    scanf("%d", &vector2[2]);

    sum_vector[0] = vector1[0] + vector2[0];
    sum_vector[1] = vector1[1] + vector2[1];
    sum_vector[2] = vector1[2] + vector2[2];

    norm = sqrt(
        (double)sum_vector[0] * (double)sum_vector[0] + 
        (double)sum_vector[1] * (double)sum_vector[1] + 
        (double)sum_vector[2] * (double)sum_vector[2]
    );

    printf("\033[32m==>\033[0m The sum vector is: %d %d %d\n", sum_vector[0], sum_vector[1], sum_vector[2]);
    printf("\033[32m==>\033[0m The norm is: %lf\n", norm);

    return 0;
}
