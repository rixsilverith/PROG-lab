// Week 3. U3: Conditionals - Lab exercises
// Lab exercise 1: By definition, a leap year is divisible
// by four, but not by one hundred, unless it is divisible
// by four hundred. Write a program that asks for a year
// and displays whether it is a leap year or not.

#include <stdio.h>

int main()
{
    unsigned int year;

    printf("\033[32m?\033[0m Enter a year: ");
    scanf("%u", &year);
   
    if ((!(year % 4) && year % 100) || !(year % 400)) {
        printf("\033[32m==>\033[0m %u is a leap year.\n", year);
    } else {
        printf("\033[32m==>\033[0m %u is not a leap year.\n", year);
    }

    return 0;
}
