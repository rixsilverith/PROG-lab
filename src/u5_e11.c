// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 11: Use nested loops to print the multiplication
// tables of numbers 1 through 9.

#include <stdio.h>

int main()
{
    unsigned int i, j;
    for (i = 1; i < 10; i++) {
        for (j = 1; j < 11; j++)
            printf("\n\033[32m-->\033[0m %d * %d = %d", i, j, i*j);
           
        printf("\n");
    }

    printf("\n");
    return 0;
}
