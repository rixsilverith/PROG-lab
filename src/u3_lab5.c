// Week 3. U3: Conditionals - Lab exercises
// Lab exercise 5: Write a C program to find whether a
// character is a vowel or not.

#include <stdio.h>

int main()
{
    char character;

    printf("\033[32m?\033[0m Insert a character: ");
    scanf(" %c", &character);

    switch (character) {
        case 65:
        case 97:
        case 69:
        case 101:
        case 73:
        case 105:
        case 79:
        case 111:
        case 85:
        case 117:
            printf("\033[32m==>\033[0m \'%c\' is a vowel.\n", character);
            break;
        default:
            printf("\033[32m==>\033[0m \'%c\' is not a vowel.\n", character);
    }

    return 0;
}
