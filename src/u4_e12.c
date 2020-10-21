// Week 4. U4: Constants, arrays, strings and structs - Structures
// Exercise 12: Write a program that defines a struct that contains
// a field for the dividend, another for the divider. another for 
// the quotient and another for the remainder.
//
// The program will ask the user for the dividend and the divider
// and store them in the corresponding fields of the struct variable,
// compute the quotient and the remainder and store them in their
// correspoding fields in the structure.
//
// Show the quotient and the remainder on the screen.

#include <stdio.h>

typedef struct
{
    double dividend;
    double divider;
    double quotient;
    double remainder;
} Division;

int main()
{
    Division div;

    printf("\n\033[32m?\033[0m Enter the dividend: ");
    scanf("%lf", &div.dividend);
    printf("\033[32m?\033[0m Enter the divider: ");
    scanf("%lf", &div.divider);

    div.quotient  = (int)div.dividend / (int)div.divider;
    div.remainder = (int)div.dividend % (int)div.divider;

    printf("\033[32m==>\033[0m The quotient is: %lf\n", div.quotient);
    printf("\033[32m==>\033[0m The remainder is: %lf\n\n", div.remainder);
    return 0;
}   
