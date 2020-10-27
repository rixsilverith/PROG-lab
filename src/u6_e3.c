// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 3: Modify the previous exercise so that the
// radius is received as argument to the function. The main
// function must ask for the value and display the result
// calculated by the function on the screen.
//
// The function that calculates the area should not request
// or show any data on the screen.

#include <stdio.h>

#define PI 3.1415

double area_circle(double radius) 
{
    double area;
    area = PI*radius*radius;
    return area;
}

int main()
{
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = area_circle(radius);
    printf("Area of circle with radius %.2lf is %.2lf\n", radius, area);
    return 0;
}
