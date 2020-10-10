// Week 4. U4: Constants, arrays, strings and structs - Arrays of structures
// Exercise 13: Write a program with an array of 2 variables of type
// Contact. The program has to read the data of two contacts, fill
// in the elements of the array (the first contact in position 0 and
// the second in position 1) and write them on the screen in the format
// of the previous exercise.

#include <stdio.h>

#define AGENDA_SIZE 2

#define DIM 50
#define TEL 12
#define ZIP 6

typedef struct
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;

typedef struct
{
    char street[DIM];
    unsigned int number;
    char city[DIM];
    char zipcode[ZIP];
} Address;

typedef struct
{
    char name[DIM];
    char surname[DIM];
    char phone[TEL];
    Address address;
    Date dob;
} Contact;

int main()
{
    Contact agenda[AGENDA_SIZE];

    printf("\n\033[32m==>\033[0m Add a contact to your agenda:\n\n");
    printf("\033[32m?\033[0m Name: ");
    scanf("%s", &agenda[0].name);
    printf("\033[32m?\033[0m Surname: ");
    scanf("%s", &agenda[0].surname);
    printf("\033[32m?\033[0m Phone number: ");
    scanf("%s", &agenda[0].phone);
    printf("\033[32m?\033[0m Street: ");
    scanf("%s", &agenda[0].address.street);
    printf("\033[32m?\033[0m Number: ");
    scanf("%u", &agenda[0].address.number);
    printf("\033[32m?\033[0m Zip code: ");
    scanf("%s", &agenda[0].address.zipcode);
    printf("\033[32m?\033[0m Location: ");
    scanf("%s", &agenda[0].address.city);
    printf("\033[32m?\033[0m Birth date (day month year): ");
    scanf("%u %u %u", &agenda[0].dob.day, &agenda[0].dob.month, &agenda[0].dob.year);

    printf("\n\033[32m==>\033[0m Add another contact to your agenda:\n\n");
    printf("\033[32m?\033[0m Name: ");
    scanf("%s", &agenda[1].name);
    printf("\033[32m?\033[0m Surname: ");
    scanf("%s", &agenda[1].surname);
    printf("\033[32m?\033[0m Phone number: ");
    scanf("%s", &agenda[1].phone);
    printf("\033[32m?\033[0m Street: ");
    scanf("%s", &agenda[1].address.street);
    printf("\033[32m?\033[0m Number: ");
    scanf("%u", &agenda[1].address.number);
    printf("\033[32m?\033[0m Zip code: ");
    scanf("%s", &agenda[1].address.zipcode);
    printf("\033[32m?\033[0m Location: ");
    scanf("%s", &agenda[1].address.city);
    printf("\033[32m?\033[0m Birth date (day month year): ");
    scanf("%u %u %u", &agenda[1].dob.day, &agenda[1].dob.month, &agenda[1].dob.year);

    printf("\n\033[32m==>\033[0m The first contact in your agenda is:\n\n");
    printf("\033[32m==>\033[0m Name: %s\n",                  agenda[0].name);
    printf("\033[32m==>\033[0m Surname: %s\n",               agenda[0].surname);
    printf("\033[32m==>\033[0m Phone number: %s\n",          agenda[0].phone);
    printf("\033[32m==>\033[0m Street: %s\n",                agenda[0].address.street);
    printf("\033[32m==>\033[0m Number: %u\n",                agenda[0].address.number);
    printf("\033[32m==>\033[0m Zip code: %s\n",              agenda[0].address.zipcode);
    printf("\033[32m==>\033[0m City: %s\n",                  agenda[0].address.city);
    printf("\033[32m==>\033[0m Date of birth: %u/%u/%u\n\n", agenda[0].dob.day, agenda[0].dob.month, agenda[0].dob.year);

    printf("\n\033[32m==>\033[0m The second contact in your agenda is:\n\n");
    printf("\033[32m==>\033[0m Name: %s\n",                  agenda[1].name);
    printf("\033[32m==>\033[0m Surname: %s\n",               agenda[1].surname);
    printf("\033[32m==>\033[0m Phone number: %s\n",          agenda[1].phone);
    printf("\033[32m==>\033[0m Street: %s\n",                agenda[1].address.street);
    printf("\033[32m==>\033[0m Number: %u\n",                agenda[1].address.number);
    printf("\033[32m==>\033[0m Zip code: %s\n",              agenda[1].address.zipcode);
    printf("\033[32m==>\033[0m City: %s\n",                  agenda[1].address.city);
    printf("\033[32m==>\033[0m Date of birth: %u/%u/%u\n\n", agenda[1].dob.day, agenda[1].dob.month, agenda[1].dob.year);

    return 0;
}
