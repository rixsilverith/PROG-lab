// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 9: Write a program that uses a loop to read up
// to 10 integer numbers. The program has to add the numbers that
// are positive. Negative numbers will not be considered for the
// sum.
//
// If the user enters a 0 it will stop reading numbers.
//
// Before finishing, the program will show the total sum obtained,
// also indicating how many numbers have been read in total (without
// counting the 0) and how many of them were negative.
//
// Note: Use break when the number entered is zero.

#include <stdio.h>

#define MAX_NUMS 10

int main()
{
    int i = 0, number, negative, sum;

    printf("\n");
    for (i = sum = negative = 0; i < MAX_NUMS; i++) {
        printf("\033[1m\033[32m?\033[37m Enter up to 10 integers (enter 0 to stop)\033[0m ");
        scanf("%d", &number);

        if (number == 0)
            break;
        else if (number > 0)
            sum += number;
        else
            negative++;
    }

    printf("\n\033[1m\033[32m-->\033[0m %d negative numbers out of %d\n", negative, i);
    printf("\033[1m\033[32m-->\033[0m Sum of all positive numbers is %d\n\n", sum);
    return 0;
}
