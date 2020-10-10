// Week 3. U3: Conditionals - Switch statement and enums
// Exercise 7 - Write an Euro converter to several currencies
// using the switch statement. 
//
// The program must present on screen a menu like the following:
// Select an option:
// {D}ollar
// {Y}en
// {P}ound
//
// Next, the program must request a quantity in euros, which 
// will be converted to the selected currency. The user can 
// enter D, Y or P in uppercase or lowercase. The program 
// must inform if the option entered is incorrect.

#include <stdio.h>

int main()
{
    char option;
    double quantity, converted_quantity;

    printf("\033[32m?\033[0m Select an option:\n");
    printf("\033[32m-\033[0m {D}ollar\n");
    printf("\033[32m-\033[0m {Y}en\n");
    printf("\033[32m-\033[0m {P}ound\n");
    printf("\033[32m?\033[0m ");
    scanf(" %c", &option);

    printf("\033[32m?\033[0m Insert a quantity in euros you want to convert: ");
    scanf("%lf", &quantity);

    switch (option) {
        case 100:
        case 68:
            converted_quantity = quantity * 1.17;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf US dollars.\n", quantity, converted_quantity);
            break;
        case 121:
        case 89:
            converted_quantity = quantity * 123.04;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf yens.\n", quantity, converted_quantity);
            break;
        case 112:
        case 80:
            converted_quantity = quantity * 0.9;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf pounds.\n", quantity, converted_quantity);
            break;
        default:
            printf("\033[31m==>\033[0m The selected option is not available.\n");
    }

    return 0;
}
