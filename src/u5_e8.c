// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 8: Modify the previous exercise to use for loops.

#include <stdio.h>

#define SZ 32

int main()
{
    int i, number, x[SZ];

    do {
        printf("\n\033[1m\033[32m?\033[37m Enter a positive integer\033[0m ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("\n\033[1m\033[32m-->\033[0m Number %d in base 10 corresponds to the following number in binary\n", number);

    for (i = 0; number > 0; i++) {
        x[i] = number % 2;
        number /= 2;
    }

    for (i--; i >= 0; i--)
        printf("%d", x[i]);

    printf("\n\n");
    return 0;
}
