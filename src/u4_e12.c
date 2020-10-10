// Week 4. U4: Constants, arrays, strings and structs - Structures
// Exercise 12: Write a program that uses the following types of data:
//
// #define DIM 50
// #define TEL 12
// #define ZIP 6
//
// typedef struct
// {
//     int day;
//     int month;
//     int year;
// } Date;
//
// typedef struct
// {
//     char street[DIM];
//     int number;
//     char city[DIM];
//     char zipcode[ZIP];
// } Address;
//
// typedef struct
// {
//     char name[DIM];
//     char surname[DIM];
//     char phone[TEL];
//     Address address;
//     Date dob;
// } Contact;
//
// The program must declare only one type Contact.
//
// Next, the program has to ask for information about a contact 
// (name, surname, phone number, street, number, zip code, location,
// birth date, month of birth and year of birth), filling in the fields
// of the declared structured variable. You can assume that the user
// will never enter names with spaces. (Use underscores _ to replace
// spaces).
//
// Finally, it will write this information using the following format:
//
// ==> Name: Luis_Alberto
// ==> Surname: Sierra
// ==> Phone number: 620324156
// ==> Street: Gran_Vía
// ==> Number: 23
// ==> Zip code: 28012
// ==> City: Madrid
// ==> Date of birth: 11/10/1998

#include <stdio.h>

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
    Contact contact;

    printf("\n\033[32m==>\033[0m Add a contact to your agenda:\n");
    printf("\033[32m?\033[0m Name: ");
    scanf("%s", &contact.name);
    printf("\033[32m?\033[0m Surname: ");
    scanf("%s", &contact.surname);
    printf("\033[32m?\033[0m Phone number: ");
    scanf("%s", &contact.phone);
    printf("\033[32m?\033[0m Street: ");
    scanf("%s", &contact.address.street);
    printf("\033[32m?\033[0m Number: ");
    scanf("%u", &contact.address.number);
    printf("\033[32m?\033[0m Zip code: ");
    scanf("%s", &contact.address.zipcode);
    printf("\033[32m?\033[0m Location: ");
    scanf("%s", &contact.address.city);
    printf("\033[32m?\033[0m Birth date (day month year): ");
    scanf("%u %u %u", &contact.dob.day, &contact.dob.month, &contact.dob.year);

    printf("\n\033[32m==>\033[0m A new contact has been added to your agenda:\n\n");
    printf("\033[32m==>\033[0m Name: %s\n",                  contact.name);
    printf("\033[32m==>\033[0m Surname: %s\n",               contact.surname);
    printf("\033[32m==>\033[0m Phone number: %s\n",          contact.phone);
    printf("\033[32m==>\033[0m Street: %s\n",                contact.address.street);
    printf("\033[32m==>\033[0m Number: %u\n",                contact.address.number);
    printf("\033[32m==>\033[0m Zip code: %s\n",              contact.address.zipcode);
    printf("\033[32m==>\033[0m City: %s\n",                  contact.address.city);
    printf("\033[32m==>\033[0m Date of birth: %u/%u/%u\n\n", contact.dob.day, contact.dob.month, contact.dob.year);

    return 0;
}
