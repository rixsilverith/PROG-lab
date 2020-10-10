// Week 5. U5: Loops - while loop
// --> Exercise 1: Write a program that implements a simple game.
// The program requests the value of an integer between 1 and 99.
// A partner must type it without you seeing it. To make the number
// disappear from the screen, print, using a while loop 25 line
// breaks. Then, the computer has to ask you for the number until
// you get it right.

#include <stdio.h>

int main()
{
    unsigned int number, guess, i = 0;

    printf("\n\033[1mLet's play a game.\033[0m\n");
    printf("\n\033[32m?\033[0m\033[1m Insert an integer between 1 and 99: \033[0m");
    scanf("%u", &number);

    if (number < 1 || number > 99)
    {
        printf("\n\033[31m==>\033[0m Nop. %u is not an integer between 1 and 99. Run the program again :(\n\n", number);
        return 1;
    }

    while(i < 25)
    {
        printf("\n");
        i++;
    }

    while (guess != number)
    {
        printf("\n\033[32m?\033[0m\033[1m Guess the inserted integer between 1 and 99: \033[0m");
        scanf("%u", &guess);
    }

    printf("\n\033[32m==>\033[0m\033[1m Congrats! %u is the right number.\n\n\033[0m", number);
    
    return 0;
}
