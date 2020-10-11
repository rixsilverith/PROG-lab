// W6-U5: Loops - For loop
// --> Exercise 6: Use a for loop to print the multiplication table
// of a number (between 1 and 9) entered by the user.

#include <stdio.h>

int main()
{
    unsigned int number;

    do {
        printf("\n\033[1m\033[32m?\033[37m Insert a number between 1 and 9 to display its multiplication table\033[0m ");
        scanf("%d", &number);
        if (number < 1 || number > 9)
            printf("\033[1m\033[31m==>\033[0m Nop. The number must be between 1 and 9.\n\n");
    } while (number < 1 || number > 9);

    printf("\n");
    for (int i = 0; i < 10; i++) {
        printf("\033[1m\033[32m==>\033[0m %d*%d = %d\n", number, i + 1, number * (i + 1));
    }

    printf("\n");
    return 0;
}
