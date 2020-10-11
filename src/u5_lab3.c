#include <stdio.h>
#include <string.h>

#define STR_LEN   100
#define LC_A_CODE 97
#define LC_Z_CODE 122
#define UC_A_CODE 65
#define UC_Z_CODE 90

int main()
{
    char string[STR_LEN], inv_string[STR_LEN], lc_char, uc_char;
    unsigned int iter = 0;

    printf("\n\033[1m\033[32m?\033[37m Enter a string of characters in lowercase\033[0m ");
    scanf("%s", string);

    do {
        printf("\033[1m\033[32m?\033[37m Enter a character in lowercase\033[0m ");
        scanf(" %c", &lc_char);

        if (lc_char < LC_A_CODE || lc_char > LC_Z_CODE)
            printf("\033[1m\033[31m==>\033[0m Error, the character must be between \'a\' and \'z\'\n\n");
    } while (lc_char < LC_A_CODE || lc_char > LC_Z_CODE);

    do {
        printf("\033[1m\033[32m?\033[37m Enter a character in uppercase\033[0m ");
        scanf(" %c", &uc_char);

        if (uc_char < UC_A_CODE || uc_char > UC_Z_CODE)
            printf("\033[1m\033[31m==>\033[0m Error, the character must be between \'A\' and \'Z\'\n\n");
    } while (uc_char < UC_A_CODE || uc_char > UC_Z_CODE);

    while (iter < strlen(string)) {
        if (string[iter] == lc_char) {
            string[iter] = uc_char;
        }
        iter++;
    }

    iter = 0;
    while (iter < strlen(string)) {
        inv_string[strlen(string) - (iter + 1)] = string[iter];
        iter++;
    }

    printf("\n\033[1m\033[32m==>\033[0m %s", string);
    printf("\n\033[1m\033[32m==>\033[0m %s\n\n", inv_string);
    return 0;
}
