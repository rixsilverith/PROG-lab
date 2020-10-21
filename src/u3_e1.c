// Week 3. U3: Conditionals - Relational and Logical Operators
// Exercise 1: Write a program that asks for your age and prints
// 1 if you are of age or your age is not a multiple of three.
// The program will show a 0 otherwise.
//
// Note: Do not use the "if" statement for this exercise.

#include <stdio.h>

int main()
{
    unsigned int age, adult, multipleof3, condition;

    printf("\033[32m?\033[0m Enter your age: ");
    scanf("%d", &age);

    adult = age >= 18;
    multipleof3 = age % 3;
    condition = adult || multipleof3;

    printf("\033[32m==>\033[0m You are of age or your age is not a multiple of three: %d\n", condition);
    return 0;
}
