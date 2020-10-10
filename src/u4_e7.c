// Week 4. U4: Constants, arrays, strings and structs - Strings
// Exercise 7: Write a program that performs the following tasks:
// -- Declare to variables of type string.
// -- Read the first string.
// -- Copy the string previously read in the second one.
// -- Print the second string.
// -- Use the strcmp function to compare both strings.
// -- Show the numerical value of the comparison (if all the
// operations have been carried out correctly this should be 0).

#include <stdio.h>
#include <string.h>

#define STR_SIZE 100

int main()
{
    char string1[STR_SIZE], string2[STR_SIZE];
    int value;

    printf("\n\033[32m?\033[0m Insert a string: ");
    scanf("%s", string1);

    strcpy(string2, string1);
    value = strcmp(string1, string2);

    printf("\033[32m==>\033[0m The string is: %s.\n", string2);
    printf("\033[32m==>\033[0m Numerical value of the comparison: %d\n\n", value);

    return 0;
}
