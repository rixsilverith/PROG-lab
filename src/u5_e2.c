// Week 5. U5: Loops - while loop
// --> Exercise 2: Modify the previous exercise to improve it
// by, on the one hand, having the computer help you in the
// search by indicating if the typed number is smaller or larger
// than the one you are trying to guess. On the other hand,
// allowing the computer to randomly generate the number to be
// guessed.
//
// Hint: The rand() function defined in the stdlib.h header
// generates a random number in the range [0, RAND_MAX] where
// RAND_MAX is a constant. Therefore, the expression rand()%100
// will generate a random number in the range [0, 99].

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned int number, guessed_number, iter = 0;
    char random_answer;
    time_t tm;

    // Make random numbers random
    srand((unsigned)time(&tm));

    printf("\n\033[1mLet's play a game.\033[0m\n");
    printf("\n\033[32m?\033[0m\033[1m Do you want the computer to randomly generate the number to be guesed? [Y/n] \033[0m");
    scanf(" %c", &random_answer);

    if (random_answer == 'y' || random_answer == 'Y') {
        number = rand()%100;
    } else {
        printf("\n\033[32m?\033[0m\033[1m Insert an integer between 1 and 99: \033[0m");
        scanf("%u", &number);

        if (number < 1 || number > 99) {
            printf("\n\033[31m==>\033[0m Nop. %u is not an integer between 1 and 99 :(\n\n", number);
            return 1;
        }

        while(iter < 25) {
            printf("\n");
            iter++;
        }
    }

    while (guessed_number != number)
    {
        printf("\n\033[32m?\033[0m\033[1m Guess the integer between 1 and 99: \033[0m");
        scanf("%u", &guessed_number);

        if (guessed_number < number) {
            printf("\033[32m==>\033[0m The number to be guessed is greater than %u\n", guessed_number);
        } else if (guessed_number > number) {
            printf("\033[32m==>\033[0m The number to be guessed is lesser than %u\n", guessed_number);
        } else {
            printf("\n\033[32m==>\033[0m\033[1m Congrats! %u is the right number.\n\n\033[0m", number);
            return 0;
        }
    }
}
