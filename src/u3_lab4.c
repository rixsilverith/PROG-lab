// Week 3. U3: Conditionales - Lab exercises
// Lab exercise 4: Write a C program to convert a character
// from lower to upper case and viceversa.

#include <stdio.h>

int main()
{
    char c1, c2;

    printf("\033[32m?\033[0m Enter a character: ");
    scanf(" %c", &character);

    if (c1 >= 'a' && c1 <= 'z') {
        c2 = c1 - ('a' - 'A');
    } else if (a >= 'A' && a <= 'Z') {
        c2 = c1 + ('a' - 'A');
    } else {
        c2 = c1;
    }

    printf("\033[32m==>\033[0m %c leads to %c\n", c1, c2);
    return 0;
}
