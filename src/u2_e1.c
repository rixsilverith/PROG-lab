// PROG1 - Week 2. Unit 2: Basic data types and operators - Exercise 1
// --> Task: Write a program that declares a variable of each type:
// short, unsigned short, long, unsigned long, int, unsigned int, 
// float, double and char. Assign a value to each variable at the
// time of declaration. The program should display the content of
// each variable on the screen. Use three different formats that
// exist for float and double type variables.

#include <stdio.h>

int main()
{
    short short_var           = -14;
    unsigned short ushort_var = 14;
    long long_var             = -124687;
    unsigned long ulong_var   = 124687;
    int int_var               = -69;
    unsigned int uint_var     = 42;
    float float_var           = -67.234;
    double double_var         = 0.235;
    char char_var             = 'a';

    printf("\033[32m-->\033[0m short: %hd and unsigned short: %hu\n", short_var, u_short_var);
    printf("\033[32m-->\033[0m long: %ld and unsigned long: %lu\n", long_var, ulong_var);
    printf("\033[32m-->\033[0m int: %d and unsigned int: %u\n", int_var, uint_var);
    printf("\033[32m-->\033[0m float: %f, scientific notation: %e and shorter: %g\n", float_var, float_var, float_var);
    printf("\033[32m-->\033[0m double: %lf, scientific notation: %le and shorter: %lg\n", double_var, double_var, double_var);
    printf("\033[32m-->\033[0m char: %c", char_var);
    return 0;
}
