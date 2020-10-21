// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 12: Write a program that calculates the sum of
// the first n terms of a geometric series of ratio r and first
// term a. For example, the sum of the first 5 terms is the 
// following:
//
// S5 = a + ar + ar^2 + ar^3 + ar^4
//
// The program must request: (a) the value of a, (b) the value
// of r, (c) and the number of terms to be added. Use a loop to
// calculate the powers of r instead of the pow function.
//
// For instance, to a = 5, r = 4 and n = 3, the sum of the 
// geometric series is 5 + 5*4 + 5*4^2 = 105.

#include <stdio.h>

int main()
{
    int i, j, a, r, n, sum = 0, exp;

    printf("\n\033[1m\033[32m?\033[37m Enter the first term of the geometric series (a)\033[0m ");
    scanf("%d", &a);
    printf("\033[1m\033[32m?\033[37m Enter the ratio of the geometric series (r)\033[0m ");
    scanf("%d", &r);
    printf("\033[1m\033[32m?\033[37m Finally, enter the number of elements to be added (n)\033[0m ");
    scanf("%d", &n);

    // Assume the user is introducing valid input. Our geometric series \sum^n ar^n is
    // starting at n = 0, therefore, if the we wanna sum 1 term, n should be n = n - 1
    // for the first term to be just a (r^0 = 1).
    n--;

    // We wanna iterate n times, if n = 0 then we should iterate while i < n + 1.
    for (i = 0, sum = 0; i <= n; i++) {
        for (j = 0, exp = 1; j < i; j++)
            exp *= r;  
        sum += a*exp;
        //printf("\n%d term is: %d", i, a*exp);
    }

    printf("\n\033[1m\033[32m-->\033[0m The sum of the geometric series with %d elements, ratio equals %d and first element equals %d is %d\n\n", n, r, a, sum);
    return 0;
}
