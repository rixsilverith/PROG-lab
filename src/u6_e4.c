// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 4: Write a program that requests a positive integer
// number and write if it is prime or not. The prototype of the 
// function has to be 
//
// int isPrime(int n)
//
// The function must return 1 if its argument is prime and 0 
// otherwise. 
//
// Note: The function must not request or show any value. The main program
// will deal with this.
//
// What would happen if we changed the name of the variable n? Should we
// also change the name of the variable of the main function?
//
// Note: To know if a number is prime, check if it is not divisible by any
// of the integers that are between 2 and its square root.

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
    /*
    int k = 2;
    while (k <= num/2 && num % k )
        k++;

    if (k > num/2)
        return 1;
    else 
        return 0;
    */
}

int main()
{
    int num;

    do {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);
    } while (num <= 0);

    if (is_prime(num))
        printf("The number %d is prime.\n", num);
    else
        printf("The number %d is not prime.\n", num);

    return 0;
}
