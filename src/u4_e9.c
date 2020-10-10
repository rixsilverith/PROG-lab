// Week 4. U4: Constants, arrays, strings and structs - Strings
// Exercise 9: Write a program that declares: two string variables
// to store a 4-character length word, and a 4-integer one-dimensional
// array. The program will ask the user to enter a string of four 
// characters and store them in the first string (Note: You can assume
// that you are always going to type four characters).
//
// Next, it will request another string of four characters and store
// them in the second string (Note: You can assume that you are always
// going to type four characters).
//
// Then, substract the characters from each position of both chains
// and save the differences in the corresponding position of the 
// integer array.
//
// Finally, the program has to use macros to define the sizes of the
// strings and the array.
//
// The messages must be shown as they appear in the following example
// of execution and in the same order (varying only according to the
// data entered by the user).
//
// Note: This exercise is an adaptation of one of the weekly continuous
// assesment tests of a previous year.
//
// The following is an example of program execution.
//
// ? Enter a string of four characters: baby
// ? Enter another string of four characters: nose
// ==> The difference between each characters of both strings is: -12, -14, -17 and 20

#include <stdio.h>
#include <string.h>

#define STR_LEN 4
#define ARRAY_SIZE 4

int main()
{
    char string1[STR_LEN], string2[STR_LEN];
    int array[ARRAY_SIZE];

    printf("\n\033[32m?\033[0m Enter a string of four characters: ");
    scanf("%s", string1);
    printf("\033[32m?\033[0m Enter another string of four characters: ");
    scanf("%s", string2);

    array[0] = string1[0] - string2[0];
    array[1] = string1[1] - string2[1];
    array[2] = string1[2] - string2[2];
    array[3] = string1[3] - string2[3];

    printf("\033[32m==>\033[0m The difference between each characters of both strings is: %d, %d, %d and %d\n\n", array[0], array[1], array[2], array[3]);
    return 0;
}
