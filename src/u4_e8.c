// Week 4. U4: Constants, arrays, strings and structs - Strings
// Exercise 8: Write a program that performs the following tasks:
// -- Declare a variable of type string.
// -- Read the string.
// -- Remove the last character of the string by placing the ASCII
// 0 value in its place (remember that the user could write a word
// of any length so you have to use the strlen function to know in
// which position you have to place the value 0).
// -- Show the truncated character string on the screen.
// 
// For example, if the user enters the string "Hello", it will be
// displayed on the screen "Hell".

#include <stdio.h>
#include <string.h>

#define STR_LEN 100

int main()
{
    char string[STR_LEN];

    printf("\n\033[32m?\033[0m Enter a string: ");
    scanf("%s", string);

    string[strlen(string) - 1] = 0;

    printf("\033[32m==>\033[0m The truncated word is: %s\n\n", string);
    return 0;
}
