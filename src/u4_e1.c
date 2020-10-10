// Week 4. U4: Constants, arrays, strings and structs - Constants
// Exercise 1: Write a program that asks for an amount in euros
// and convert it to dollars, pounds sterling and yen.
//
// Look for euro convertion on the web and use macros to save them.

#include <stdio.h>

#define DOLLAR_FACTOR 1.17
#define POUND_FACTOR  0.9
#define YEN_FACTOR    123.07

int main()
{
    double euros, dollars, pounds, yen;

    printf("\033[32m?\033[0m Insert the amount of money in euros to convert: ");
    scanf("%lf", &euros);

    dollars = euros * DOLLAR_FACTOR;
    pounds  = euros * POUND_FACTOR;
    yen     = euros * YEN_FACTOR;

    printf("\033[32m==>\033[0m Convertion to dollars: %.2lf\n", dollars);
    printf("\033[32m==>\033[0m Convertion to pounds sterling: %.2lf\n", pounds);
    printf("\033[32m==>\033[0m Convertion to yen: %.2lf\n", yen);

    return 0;
}
