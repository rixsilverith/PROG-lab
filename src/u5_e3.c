// Week 5. U5: Loops - while loops
// --> Exercise 3: Write a program that initializes an array of 10
// integers in the declaration with the values you want.
//
// Then, the program has to ask the user to enter the number of
// values that he wants to be shown on the screen (from 1 to 10).
//
// The program has to display as many numbers as the user said.

#include <stdio.h>

#define INT_ARRAY_SIZE 10

int main()
{
    int integers[INT_ARRAY_SIZE] = {69, 14, 42, 27, 1, 94, 32, 89, 10, 56};
    unsigned int iteration = 0, ints_to_display = 0;

    printf("\n\033[32m?\033[0m\033[1m How many integers do you want to display? (1 - 10) \033[0m\033[34m");
    scanf("%u", &ints_to_display);
    printf("\n\033[0m");

    while (iteration < ints_to_display) {
        printf("\033[32m==>\033[0m %d\n", integers[iteration]);
        iteration++;
    }

    printf("\n");

    return 0;
}
