// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 1: Write a program with a function that requests
// the radius of a circle and show its area on the screen.
//
// The main function will only call this function, and will not
// declare any variable or have any other instructions.

#include <stdio.h>

#define PI 3.1415

void area_circle() 
{
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI*radius*radius;

    printf("Area of circle with radius %.2lf is %.2lf\n", radius, area);
}

int main()
{
    area_circle();
    return 0;
}
