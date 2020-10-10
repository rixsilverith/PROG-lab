// Week 3 - U3: Conditionals - if-else statement
// Exercise 5: Write a program that asks the user for his height
// in centimeters and weight in kilograms, calculates the body
// mass index and issue one of these three diagnoses: underweight,
// normal weight or overweight.
//
// The body mass index is considered normal if it is in the 
// interval [21, 25], and it's calculated as follows:
// bmi = 10000 * weight / (height * height)

#include <stdio.h>

int main()
{
    double height, weight, bmi;

    printf("\033[32m?\033[0m Your height in cm: ");
    scanf("%lf", &height);
    printf("\033[32m?\033[0m Your weight in kg: ");
    scanf("%lf", &weight);

    bmi = 10000 * weight / (height * height);

    if (bmi < 21) {
        printf("\033[32m==>\033[0m Underweight.\n");
    } else if (bmi > 25) {
        printf("\033[32m==>\033[0m Overweight.\n");
    } else {
        printf("\033[32m==>\033[0m Normal weight.\n");
    }

    return 0;
}
