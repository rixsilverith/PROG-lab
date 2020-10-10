// Week 5. U5: Loops - do-while loops
// --> Exercise 5.4: Write a new version of the game from 
// execise 5.2 using a do-while loop, instead of a while
// loop.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number, guessed_number;
    char random_answer;

    printf("\n\033[1m Let's play a game.\n\033[0m");
    printf("\n\033[32m?\033[0m\033[1m Do you want the computer to randomly generate the number to be guessed? [Y/n]\033[0m ");
    scanf(" %c", &random_answer);

    if (random_answer == 'Y' || random_answer == 'y') {
        number = rand()%100;
    } else {
        printf("\033[32m?\033[0m\033[1m Then, please insert the number to be guessed (from 0 to 99)\033[0m ");
        scanf("%u", &number);
    } 

    do {
        printf("\n\033[32m?\033[0m\033[1m Guess the number between 0 and 99:\033[0m ");
        scanf("%u", &guessed_number);

        if (guessed_number < number) {
            printf("\033[32m==>\033[0m The number to be guessed is greater than %u\n", guessed_number);
        } else if (guessed_number > number) {
            printf("\033[32m==>\033[0m THe number to be guessed is lesser than %u\n", guessed_number);
        } else {
            printf("\033[32m==>\033[0m Nora! The guessed number is %u\n\n", number);
        }
    } while (guessed_number != number);

    return 0;
}
