#include <stdio.h>

#define INT_ARRAY_MAX_SIZE 11

int main()
{
    int numbers[INT_ARRAY_MAX_SIZE], inv_numbers[INT_ARRAY_MAX_SIZE], integer, iter = 0, num_counter = 0;

    printf("\n");
    do {
        printf("\033[1m\033[32m?\033[37m Enter an integer number (0 to finish)\033[0m ");
        scanf("%d", &numbers[i]);
        iter++;
    } while (iter < INT_ARRAY_MAX_SIZE && x[iter - 1] != 0);

    iter = 0;

    if (iter == 1) {
        printf("\033[31m==>\033[0m No number was entered\n");
        return 1;
    } else if (iter == 10) {
        printf("\033[32==>\033[0m Maximum number of numbers reached. Keep going...\n");
    } else {
        iter -= 2;
    }

    printf("\n\033[1m\033[32m==>\033[0m The typed numbers are ");
    //int len = sizeof numbers / sizeof numbers[0];
    while (iter >= 0) {
        printf("%d ", numbers[iter]);
        iter--;
    }

    printf("\n\n");
    return 0;
}
