// ------------------------------------------------
// PROG-I. Week 8. U6: Functions and pointers
// ------------------------------------------------
// --> Exercise 2: Modify the function of the previous exercise
// so that it returns the result to the main program and it is
// the latter which is responsible for displaying it on the screen.

#include <stdio.h>

#define PI 3.1415

double area_circle() 
{
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI*radius*radius;
    return area;
}

int main()
{
    double area;
    area = area_circle();
    printf("Area of circle with radius %.2lf is %.2lf\n", radius, area);
    return 0;
}
