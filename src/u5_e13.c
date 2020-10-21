// ---------------------------------------------------
// PROG-lab. Week 6. U5: Loops - for loop
// ---------------------------------------------------
// --> Exercise 12: Write a program that requests an integer
// number an displays all prime numbers between 2 and the 
// requested number.

#include <stdio.h>

int main()
{
    int x, n, k;

    printf("\n\033[1m\033[32m?\033[37m Enter a positive integer number\033[0m ");
    scanf("%d", &n);

    // Iterate over every element between 2 and n.
    for (x = 2; x <= n; x++) {
        k = 2;

        // For every element x between 2 and n, check if x
        // can't be divided by any number k between 2 and x/2.
        // If so (we have iterated over all elements between 2
        // and x/2 --> k > x/2) then x is prime.
        while (k <= x/2 && x % k)
            k++;

        if (k > x/2)
            printf("%d ", x);
    }

    /*
    // We wanna start looking for primes greater than 2.
    //printf("Nums between 2 and %d: ", num);
    // Check if every element between 2 and num is prime.
    for (int i = 2; i < num; i++) {
        for (int j = 2; j < i; j++) {
            if (!(i % j)) {
                printf("\n%d is not prime", i); break;
            } else {
                printf("\n%d is a prime", i); break;
            }
        }
    
        //printf("%d ", i);
    }
    */

    printf("\n"); 
    //printf("\n\033[1m\033[32m-->\033[0m The sum of the geometric series given a, r and n is %d\n\n", sum);
    return 0;
}
