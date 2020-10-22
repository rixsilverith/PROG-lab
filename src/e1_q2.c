#include <stdio.h>
#include <string.h>

#define SIZE 200

typedef struct {
    char s1[SIZE];
    char s2[SIZE];
} Strings;

int main()
{
    Strings s;
    int i, equal;

    do {
        printf("Enter string 1: ");
        fgets(s.s1, SIZE, stdin);
        s.s1[strlen(s.s1) - 1] = 0;
        printf("Enter string 2: ");
        fgets(s.s2, SIZE, stdin);
        s.s2[strlen(s.s2) - 1] = 0;

        if (strlen(s.s1) != strlen(s.s2))
            printf("Length of \"%s\" and \"%s\" are not equal\n", s.s1, s.s2);
    } while (strlen(s.s1) != strlen(s.s2));

    for (i = 0, equal = 1; i < strlen(s.s1); i++) {
        if (s.s1[i] != s.s2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal) {
        printf("Both strings are equal\n");
    } else {
        printf("Both strings are equal until character %d\n", i);
    }

    return 0;
}

// To me: This one was easy as fuck compared with the other one. I have done it in about
// 10 min or so.
