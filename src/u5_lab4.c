#include <stdio.h>

#define INT_ARRAY_MAX_SIZE 10

int main()
{
    int numbers[INT_ARRAY_MAX_SIZE], inv_numbers[INT_ARRAY_MAX_SIZE], integer, iter = 0, num_counter = 0;

    printf("\n");
    do {
        printf("\033[1m\033[32m?\033[37m Enter an integer number (0 to finish)\033[0m ");
        scanf("%d", &integer);

        if (integer != 0) {
            numbers[iter] = integer;
            num_counter++;
        } else {
            break;
        }

        iter++;
    } while (iter < INT_ARRAY_MAX_SIZE);

    iter = 0;
    // int numbers_len = sizeof numbers / sizeof numbers[0];
    while (iter < num_counter) {
        inv_numbers[num_counter - (iter + 1)] = numbers[iter];
        iter++;
    }

    printf("\n\033[1m\033[32m==>\033[0m The typed numbers are");
    iter = 0;
    //int len = sizeof numbers / sizeof numbers[0];
    while (iter < num_counter) {
        printf(" %d", inv_numbers[iter]);
        iter++;
    }

    printf("\n\n");
    return 0;
}
