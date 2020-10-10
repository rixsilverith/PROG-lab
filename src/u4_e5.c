// Week 4. U4: Constants, arrays, strings and structs - Strings
// Exercise 5: Write a program that initializes a string with 
// the text "Hello world".
//
// The program must also modify the string to replace the space
// with the ASCII 0 (that is, assign the value 0 to the position
// of the string where the space is located). Finally, it has to
// print the string on the screen.

#include <stdio.h>

#define STR_SIZE 11

int main()
{
    char hi[STR_SIZE] = "Hello world";
    hi[5] = 0;

    printf("\033[32m==>\033[0m %s.\n", hi);
    return 0;
}
