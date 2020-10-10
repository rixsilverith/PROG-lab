// Week 3. U3: Conditionals - Lab exercises
// Lab exercise 3: Write a program that asks for three
// integer numbers and determine the smallest one.

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("\033[32m?\033[0m Insert three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num1 < num3) {
        printf("\033[32m==>\033[0m %d is the smallest number.\n", num1);
    } else if (num2 < num1 && num2 < num3) {
        printf("\033[32m==>\033[0m %d is the smallest number.\n", num2);
    } else if (num3 < num1 && num3 < num2) {
        printf("\033[32m==>\033[0m %d is the smallest number.\n", num3);
    } else {
        printf("Smth else.\n");
    }

    return 0;
}
