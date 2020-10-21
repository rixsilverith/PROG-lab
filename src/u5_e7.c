// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 7: Write a program that reads a positive integer
// in base 10 on the keyboard and converts it to binary.
//
// Hint: The conversion will be done on a table of integers, 
// saving the binary number in reverse order.
//
// The program has to show the binary number in the correct order.
//
// Note: Use while loops.

#include <stdio.h>

#define SZ 32

int main()
{
    int i = 0, number, x[SZ];

    do {
        printf("\n\033[1m\033[32m?\033[37m Enter a positive integer\033[0m ");
        scanf("%d", &number);
    } while (number <= 0);

    printf("\n\033[1m\033[32m-->\033[0m Number %d in base 10 corresponds to the following number in binary\n", number);

    while (number > 0) {
        x[i] = number % 2;
        number /= 2;
        i++;
    }

    i--;

    while (i >= 0) {
        printf("%d", x[i]);
        i--;
    }

    printf("\n\n");
    return 0;
}
