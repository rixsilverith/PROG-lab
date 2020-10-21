#include <stdio.h>

int main()
{
    unsigned int num_elements_to_read = 0, iteration = 0;

    do {
        printf("\n\033[32m\033[1m?\033[37m How many numbers do you want to read? (Between 2 and 10)\033[0m ");
        scanf("%u", &num_elements_to_read);

        if (num_elements_to_read < 2 || num_elements_to_read > 10)
            printf("\033[31m\033[1m==>\033[0m Error, you must enter a number between 2 and 10.\n");
    } while (num_elements_to_read < 2 || num_elements_to_read > 10);

    double numbers[num_elements_to_read];

    printf("\n");
    while (iteration < num_elements_to_read) {
        printf("\033[32m\033[1m?\033[37m Enter the number %d of %u\033[0m ", iteration + 1, num_elements_to_read);
        scanf("%lf", &numbers[iteration]);
        iteration++;
    }

    printf("\n");

    iteration = num_elements_to_read - 2;
    while (iteration >= 0) {
        if (numbers[iteration] < numbers[num_elements_to_read - 1])
            printf("\033[32m\033[1m==>\033[0m The number %.2lf is less than the number %.2lf\n", numbers[iteration], numbers[num_elements_to_read - 1]);

        iteration--;
    }

    printf("\n");

    return 0;
}
