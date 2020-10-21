// ---------------------------------------------------------------
// PROG-lab. Week 4. U4: Constants, arrays, strings and structs
// - Lab exercises
// ---------------------------------------------------------------
// --> Lab exercise 6: Define two structures:
//      (a) The first will be called Date and will contain one member for
//          the day, another for the month and another for the year.
//      (b) The second one will be called Appointments and will contain a
//          member of type string for the name and another member with an
//          array of two elements of type Date.
//
// Write a program that declares a variable of type Appointments. The 
// program has to ask for your name and store it in the string member (Note: 
// you can assume that the name will always be entered without spaces). 
//
// Next, it will request a date and will store it in the first position of 
// the date array. It will continue requesting another date and storing it
// in the second position of the date array.
//
// Finally, it will show thw information stored on the screen.
//
// The program must use a macro to define the size of the array and another
// for the size of the strings.
//
// Note: This execise corresponds to one of the weekly tests of continuous
// evaluation of a past year.
//
// The messages must be shown as they appear in the following example of
// execution and in the same order (varying only according to the data 
// entered by the user).
//
// The following is an example of program execution:
//
// ? Enter your name: Emma
// ? Enter a day, month and year separated by spaces: 17 3 2021
// ? Enter another day, month and year separated by spaces: 4 12 2020
//
// --> Hi Emma
// --> You have an appointment on 3/17/2021 and another on 12/4/2020
