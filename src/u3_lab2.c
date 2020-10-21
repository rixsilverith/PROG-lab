// Week 3. U3: Conditionals - Lab exercises
// Lab exercise 2: Write a program that asks for three
// integer numbers and determine the largest one.

#include <stdio.h>

int main()
{
    int a, b, c, max;

    printf("\033[32m?\033[0m Insert three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("\033[32m==>\033[0m The largest number out of %d, %d and %d is: %d\n", a, b, c, max);
    return 0;
}
