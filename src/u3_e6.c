// Week 3. U3: Conditionals - if-else statement
// Exercise 6: Write a program that reads two dates in
// the form of day, month and year separated by spaces.
// The program must write a message indicating which of
// the two is earlier, or if both are the same date.
//
// The following is an example of execution:
// ? Please enter the first date: 11 3 1972
// ? Please enter the second date: 24 2 1989
// ==> The date 11/3/1972 is before 24/2/1989

#include <stdio.h>

int main()
{
    unsigned int d1, m1, y1, d2, m2, y2;

    printf("\033[32m?\033[0m Please enter the first date: ");
    scanf("%u %u %u", &d1, &m1, &y1);
    printf("\033[32m?\033[0m Please enter the second date: ");
    scanf("%u %u %u", &d2, &m2, &y2);

    if (y1 < y2) {
        printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d1, m1, y1, d2, m2, y2);
    } else if (y1 > y2) {
        printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d2, m2, y2, d1, m1, y1);
    } else {
        if (m1 < m2) {
            printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d1, m1, y1, d2, m2, y2);
        } else if (m1 > m2) {
            printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d2, m2, y2, d1, m1, y1);
        } else {
            if (d1 < d2) {
                printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d1, m1, y1, d2, m2, y2);
            } else if (d1 > d2) {
                printf("\033[32m==>\033[0m The date %u/%u/%u is before %u/%u/%u.\n", d2, m2, y2, d1, m1, y1);
            } else {
                printf("\033[32m==>\033[0m The dates %u/%u/%u and %u/%u/%u are the same.\n", d1, m1, y1, d2, m2, y2);
            }
        } 
    }

    return 0;
}
