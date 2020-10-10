// Week 3. U3: Conditionals - if-else statement
// Exercise 4: Modify the previous exercise to first
// check if you are a minor and, in that case, show the
// message "You are underage".
//
// If you are of legal age, you will check if your age
// is a multiple of three and it will show the messages
// "You are of age and your age is a multiple of three"
// or "You are of age and your age is not a multiple
// of three.

#include <stdio.h>

int main()
{
    unsigned int age, adult, multipleof3, condition;

    printf("\033[32m?\033[0m Enter your age: ");
    scanf("%d", &age);

    adult = age >= 18;
    multipleof3 = !(age % 3);

    if (adult) {
        if (!multipleof3) {
            printf("\033[32m==>\033[0m You are of age and your age is not a multiple of three.\n");
        } else {
            printf("\033[32m==>\033[0m You are of age and your age is a multiple of three.\n");
        }
    } else {
        printf("\033[32m==>\033[0m You are underage.\n");
    }

    return 0;
}
