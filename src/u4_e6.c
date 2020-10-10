// Week 4. U4: Constants, arrays, strings and structs - Strings
// Exercise 6: Write a program that reads two strings and writes
// the numeric value returned by strcmp. To use this function
// you must include the header string.h at the beginning of the
// program.
//
// The following is an example of program execution:
//
// ? Enter a string: Thread
// ? Enter another string: Hello
// ==> The value returned by the comparison of the strings is: -6

#include <stdio.h>
#include <string.h>

#define STR_SIZE 50

int main()
{
    char string1[STR_SIZE], string2[STR_SIZE];
    int value;

    printf("\n\033[32m?\033[0m Enter a string: ");
    scanf("%s", string1);
    printf("\033[32m?\033[0m Enter another string: ");
    scanf("%s", string2);

    value = strcmp(string1, string2);

    printf("\033[32m==>\033[0m The value returned by the comparison of the strings is: %d\n\n", value);
    return 0;
}
