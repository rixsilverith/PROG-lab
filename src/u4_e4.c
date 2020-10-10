// Week 4. U4: Constants, arrays, strings and structs - Arrays
// Exercise 4: Write a program that defines an array of integers
// of size 3x3. The program has to read a date and store it in 
// the first row of the matrix (the day in the first column,
// the month in the second and the year in the third).
//
// Next, it has to read another date and store it in the second
// row of the matrix (the day in the first column, the month in
// the second and the year in the third).
//
// Then, it has to calculate the difference between the days,
// months and years of the first and second rows of the matrix
// and store them in the third row of the matrix (the difference
// of days in the first column, the difference of months in the
// second and the difference of years in the third).
//
// Finally, it will show the differences stored in the third row
// of the matrix on the screen.
//
// The program has to use a macro to define matrix size. The 
// messages must be shown as they appear in the following 
// example of execution and in the same order (varying only 
// according to the data entered by the user).
//
// Note: This exercise is an adaptation of one of the weekly
// continuous assessment tests from a previous year.
//
// The following is an example of program execution:
//
// ? Enter a day: 28
// ? Enter a month: 2
// ? Enter a year: 1997
// ? Enter another day: 26
// ? Enter another month: 6
// ? Enter another year: 2000
// ==> The difference in days is: 3
// ==> The difference in months is: -4
// ==> The difference in years is: -3

#include <stdio.h>

#define MATRIX_SIZE 3

int main()
{
    int dates[MATRIX_SIZE][MATRIX_SIZE];

    printf("\033[32m?\033[0m Enter a day: ");
    scanf("%d", &dates[0][0]);
    printf("\033[32m?\033[0m Enter a month: ");
    scanf("%d", &dates[0][1]);
    printf("\033[32m?\033[0m Enter a year: ");
    scanf("%d", &dates[0][2]);
    printf("\033[32m?\033[0m Enter another day: ");
    scanf("%d", &dates[1][0]);
    printf("\033[32m?\033[0m Enter another month: ");
    scanf("%d", &dates[1][1]);
    printf("\033[32m?\033[0m Enter another year: ");
    scanf("%d", &dates[1][2]);

    // Compute day difference.
    dates[2][0] = dates[0][0] - dates[1][0];
    // Compute month difference.
    dates[2][1] = dates[0][1] - dates[1][1];
    // Compute year difference.
    dates[2][2] = dates[0][2] - dates[1][2];

    printf("\033[32m==>\033[0m The difference in days is: %d\n",   dates[2][0]);
    printf("\033[32m==>\033[0m The difference in months is: %d\n", dates[2][1]);
    printf("\033[32m==>\033[0m The difference in years is: %d\n",  dates[2][2]);

    return 0;
}
