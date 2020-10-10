// Week 3. U3: Conditionals - Switch statement and enums
// Exercise 8 - Modify the previous exercise so that the menu
// is of the form:
//
// Select an option:
// 1. Dollar
// 2. Japanese Yen
// 3. Pound Sterling
//
// The user can enter 1, 2 or 3 and the option will be read as
// an integer.

#include <stdio.h>

int main()
{
    unsigned int option;
    double quantity, converted_quantity;

    printf("\033[32m?\033[0m Select an option:\n");
    printf("\033[32m-\033[0m 1. Dollar\n");
    printf("\033[32m-\033[0m 2. Japanese Yen\n");
    printf("\033[32m-\033[0m 3. Pound Sterling\n");
    printf("\033[32m?\033[0m ");
    scanf("%u", &option);

    printf("\033[32m?\033[0m Insert a quantity in euros you want to convert: ");
    scanf("%lf", &quantity);

    switch (option) {
        case 1:
            converted_quantity = quantity * 1.17;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf US dollars.\n", quantity, converted_quantity);
            break;
        case 2:
            converted_quantity = quantity * 123.04;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf yens.\n", quantity, converted_quantity);
            break;
        case 3:
            converted_quantity = quantity * 0.9;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf pounds.\n", quantity, converted_quantity);
            break;
        default:
            printf("\033[31m==>\033[0m The selected option is not available.\n");
    }

    return 0;
}
