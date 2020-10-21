// Week 5. U5: Loops - Lab exercises
// --> Lab exercise 2: Write a program that asks how many integer
// numbers are going to be typed. The program must ensure that 
// this number is between 2 and 10, both included. For this you 
// must request it while a number is not within this interval.
//
// The program has to store the numbers in an array and show
// those that are even and those that are odd starting from the
// last entered.
//
// For loops, it uses only while and / or do-while loops.
//
// The messages must be displayed as they appear in the following
// execution examples and in the same order (varying only according
// to the data entered by the user).
//
// The following is an example of execution:
//
// ? How many numbers do you want to type? (Between 2 and 10) 6
//
// ? Enter the number 1 of 6 2
// ? Enter the number 2 of 6 56
// ? Enter the number 3 of 6 1
// ? Enter the number 4 of 6 7
// ? Enter the number 5 of 6 9
// ? Enter the number 6 of 6 18
//
// ==> The even numbers are 18 56 2
// ==> The odd numbers are 9 7 1
//
// Note: This exercise corresponds to one of the weekly tests of
// continuous evaluation of past courses.

#include <stdio.h>

#define C_RESET "\033[0m"
#define C_BOLD  "\033[1m"
#define C_GREEN "\033[32m"
#define C_RED   "\033[31m"
#define C_WHITE "\033[37m"

#define C_OUTPUT "C_BOLDC_GREEN==>C_WHITE"
#define C_INPUT  "C_BOLDC_GREEN?C_WHITE"

int main()
{
    unsigned int nums_to_type = 0, iter = 0;

    do {
        printf("\n\033[1m\033[32m?\033[37m How many integers you wanna type? (2-10)\033[0m ");
        scanf("%u", &nums_to_type);
        
        if (nums_to_type < 2 || nums_to_type > 10)
            printf("\033[1m\033[31m==>\033[0m Error, you must enter a number between 2 and 10.\n");
    } while (nums_to_type < 2 || nums_to_type > 10);

    int numbers[nums_to_type], even_nums[nums_to_type], odd_nums[nums_to_type];

    printf("\n");
    while (iter < nums_to_type) {
        printf("\033[1m\033[32m?\033[37m Enter number %u of %u\033[0m ", iter + 1, nums_to_type);
        scanf("%d", &numbers[iter]);
        iter++;
    }
    printf("\n");

    iter = nums_to_type - 1;
    printf("\033[1m\033[32m==>\033[0m The even numbers are ");
    while (iter >= 0) {
        if (!(numbers[iter] % 2)) {
            printf("%d ", numbers[iter]);
        }

        i--;
    }

    printf("\n\033[1m\033[32m==>\033[0m The odd numbers are ");
    int i = nums_to_type - 1;
    while (i >= 0) {
        if (numbers[i] % 2)
            printf("%d ", numbers[i]);
        i--;
    }

    /*
    int even_counter = 0, odd_counter = 0;
    printf("\n");
    iter = 0;
    while (iter < nums_to_type) {
        if (!(numbers[iter] % 2)) {
            even_nums[even_counter] = numbers[iter];
            even_counter++;
        } else {
            odd_nums[odd_counter] = numbers[iter];
            odd_counter++;
        }
        iter++;
    }
    
    if (even_counter > 0) {
        printf("\033[1m\033[32m==>\033[0m The even numbers are ");
        iter = 0;
        while (iter < even_counter) {
            printf("%d ", even_nums[iter]);
            iter++;
        }
    } else {
        printf("\n\033[1m\033[32m==>\033[0m No even numbers were typed :(");
    }

    if (odd_counter > 0) {
        printf("\n\033[1m\033[32m==>\033[0m The odd numbers are ");
        iter = 0;
        while (iter < odd_counter) {
            printf("%d ", odd_nums[iter]);
            iter++;
        }
    } else {
        printf("\n\033[1m\033[32m==>\033[0m No odd numbers were typed :(");
    }
    */

    printf("\n\n");
    return 0;
}















