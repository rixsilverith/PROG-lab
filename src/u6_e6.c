// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 6: Two prime numbers are twin prims if they are
// separated by a distance of two. That is, if x and y are prime,
// y must be equal to x + 2. For example, 3 and 5, 5 and 7, 11 and 13,
// 17 and 19 are twin primes.
//
// Write a program that asks the user for a number, check if it's a prime
// and in that case report if it has a twin prime.
//
// Possible outputs of the program are:
//
// The number 4 is not prime
// The number 23 is prime but does not have a twin prime
// The number 13 is prime and the 11 is twin prime.
//
// Note: If the number has two twin primes only show th lowest.

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
    int num;

    do {
        printf("Enter a positive integer number: ");
        scanf("%d", &num);
    } while (num <= 0);

    if (!is_prime(num)) {
        printf("The number %d is not prime.\n", num);
    else if (is_prime(num - 2))
        printf("The number %d is prime and the %d is twin prime.\n", num, num - 2);
    else if (is_prime(num + 2))
        printf("The number %d is prime and the %d is twin prime.\n", num, num + 2);
    else
        printf("The number %d is prime but does not have a twin prime.\n", num);

    return 0;
}
