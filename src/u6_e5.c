// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 5: One of the main utilities of functions is that
// they can be reused in different programs. This is what happens
// for example with scanf, printf or strcmp functions. These functions
// perform a specific task that is invoked in many different programs.
//
// The same can happen with any of the functions we are writing. Try
// to always think of them as reusable functions that could be used in
// other main programs. They can be programs that do completely different
// tasks but need to solve the specific problem that solves that function 
// and use it at a certain point. Very commonly they can be programs
// written by other people.
//
// Use the same is_prime() function that you have implemented in the 
// previous exercise, without modifying it, to create a program that
// shows all the prime numbers from 2 to a number requested to the user by
// keyboard.

#include <stdio.h>
#include <math.h>

unsigned int is_prime(int num) 
{
    int prime = 1;
    for (int i = 2; i <= sqrt(num); i++) {
        if (!(num % i)) {
            prime = 0;
            break;
        }
    }

    return prime;
}

int main()
{
    int num, x;

    do {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);
    } while (num <= 0);

    printf("All the prime numbers between 2 and %d are ", num);
    for (x = 2; x <= num; x++) {
        if (is_prime(x))
            printf("%d ", x);
    }

    printf("\n");
    return 0;
}
