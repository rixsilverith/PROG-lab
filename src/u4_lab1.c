// -------------------------------------------------------------
// PROG-lab. Week 4. U4: Constans, arrays, strings and structs
// -------------------------------------------------------------
// --> Lab exercise 1: Declare a structure called Date that contains
// three members of type integer: day, month and year. Use that
// structure in a program that requests the date of birth of two
// people and stores them in two structures.
//
// The program has to compare the dates and report the following cases:
//      (a) If both users were born exactly the same day.
//      (b) If both users share birthdays but have been born in a
//          different year, how many years is the difference?
//      (c) If both users do not share birthdays.
//
// The messages must be shown as they appear in the following 
// execution example and in the same order (varying only according to
// the data entered by the user).
//
// Note: This exercise corresponds to one of the weekly tests of
// continuous evaluation of a past course.
//
// The following is an example of program execution:
//
// ? Enter the date of birth of the first user separated by spaces: 17 2 1999
// ? Enter the date of birth of the second user separated by spaces: 17 2 1999
//
// The following is another example of program execution:
//
// ? Enter the date of birth of the first user separated by spaces: 17 2 1995
// ? Enter the date of birth of the second user separated by spaces: 17 2 1999

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;

int main() 
{
    Date d1, d2;

    printf("\n\033[1m\033[32m?\033[37m Enter the date of birth of the first user separated by spaces\033[0m ");
    scanf("%u %u %u", &d1.day, &d1.month, &d1.year);
    printf("\033[1m\033[32m?\033[37m Enter the date of birth of the second user separated by spaces\033[0m ");
    scanf("%u %u %u", &d2.day, &d2.month, &d2.year);

    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        printf("\n\033[1m\033[32m-->\033[0m Congrats! You were both born the same day.\n\n");
    } else if (d1.day == d2.day && d1.month == d2.month) {
        printf("\n\033[1m\033[32m-->\033[0m You both turn years the same day. You are %d years apart.\n\n",
            abs(d2.year - d1.year));
    } else {
        printf("\n\033[1m\033[32m-->\033[0m You do not have the same birthday.\n\n");
    }

    return 0;
}
