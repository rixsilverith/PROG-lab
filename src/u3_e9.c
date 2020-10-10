// Week 3. U3: Conditionals - Switch statement and enums
// Exercise 9 - Modify the previous exercise to use the 
// following enumeration:
//
// typedef enum {...} Currency;
//
// Filling the part between curly brackets. Use the values
// you fill in for each "case" (instead of using 1, 2 and 3).

#include <stdio.h>

typedef enum {
    dollar = 1, yen, pound
} Currency;

int main()
{
    Currency currency;
    double quantity, converted_quantity;

    printf("\033[32m?\033[0m Select an option:\n");
    printf("\033[32m-\033[0m 1. Dollar\n");
    printf("\033[32m-\033[0m 2. Japanese Yen\n");
    printf("\033[32m-\033[0m 3. Pound Sterling\n");
    printf("\033[32m?\033[0m ");
    scanf("%d", &currency);

    printf("\033[32m?\033[0m Insert a quantity in euros you want to convert: ");
    scanf("%lf", &quantity);

    switch (currency) {
        case dollar:
            converted_quantity = quantity * 1.17;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf US dollars.\n", quantity, converted_quantity);
            break;
        case yen:
            converted_quantity = quantity * 123.04;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf yens.\n", quantity, converted_quantity);
            break;
        case pound:
            converted_quantity = quantity * 0.9;
            printf("\033[32m==>\033[0m %.2lf euros are equivalent to %.2lf pounds.\n", quantity, converted_quantity);
            break;
        default:
            printf("\033[31m==>\033[0m The selected option is not available.\n");
    }

    return 0;
}
