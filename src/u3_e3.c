// Week 3. U3: Conditionals - if-else statement
// Exercise 3: Modify the previous exercise so that instead
// of a 1, the message "You are of age and your age is not 
// a multiple of three" is displayed. Also, instead of a 0,
// the message "You are a minor or your age is a multiple
// of three" is displayed.
//
// Note: Use if-else conditions.

#include <stdio.h>

int main()
{
    unsigned int age, adult, multipleof3, condition;

    printf("\033[32m?\033[0m Enter your age: ");
    scanf("%d", &age);

    adult = age >= 18;
    multipleof3 = !(age % 3);
    condition = adult && !multipleof3;

    if (condition) {
        printf("\033[32m==>\033[0m You are of age and your age is not a multiple of three.\n");
    } else {
        printf("\033[32m==>\033[0m You are a minor or your age is a multiple of three.\n");
    }

    return 0;
}
