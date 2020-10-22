#include <stdio.h>
#include <string.h>

#define STR_LEN 200

int main()
{
    char string[STR_LEN], tstring[STR_LEN];
    int i, valid;

    do {
        printf("Type a string: ");
        fgets(string, STR_LEN, stdin);
        string[strlen(string) - 1] = 0;

        for (i = 0, valid = 0; i < strlen(string); i++) {
            if (
                (string[i] >= 'a' && string[i] <= 'z') ||
                (string[i] >= 'A' && string[i] <= 'Z') ||
                (string[i] >= '1' && string[i] <= '9') ||
                (string[i] == 32)
            ) {
                valid++;
            } else {
                printf("Character %d (%c) of \"%s\" is invalid\n", i, string[i], string);
                break;
            }
        }

    } while (valid != strlen(string));

    strcpy(tstring, string);

    for (i = 0; i < strlen(tstring); i++) {
        if (tstring[i] >= 'A' && tstring[i] <= 'Z')
            tstring[i] = tstring[i] - ('A' - 'a');
        else if (tstring[i] >= 'a' && tstring[i] <= 'z')
            tstring[i] = tstring[i] + ('A' - 'a');
        else if (tstring[i] >= '1' && tstring[i] <= '9') {
            // I don't actually know what the fuck is line does, but it fucking works.
            tstring[i] = (i + tstring[i] - '0') % ('9' - '0' + 1) + '0';
            //tstring[i] = string[i]*(!(string[i] + i > '9')) + '1'*(string[i] + i > '9') + i;
            /*
            do {
                tstring[i] = tstring[i]*!(tstring[i] + i > '9') + '1'*(tstring[i] + i > '9') + (tstring[i] - '9');
            
            } while (tstring[i] > '9');
            */
            // Nah, I give up.

            /*
            if (string[i] + i > '9')
                while (string[i] + i > '9')
                    tstring[i] = (tstring[i] + i) - '9';
                //tstring[i] = '9' - i;
            else
                tstring[i] = tstring[i] + i;

            */
        } else
            continue;
    }

    printf("The original string is: \"%s\"\n", string);
    printf("The transformed string is: \"%s\"\n", tstring);

    return 0;
}
