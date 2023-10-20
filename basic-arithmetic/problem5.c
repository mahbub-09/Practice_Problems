#include <stdio.h>
int main()
{
    double r, diamtr, circum, area;
    printf("Enter value of Radius : ");
    scanf("%lf", &r);

    diamtr = 2 * r;
    circum = 2 * 3.14159 * r;
    area = 3.14159 * r * r;

    printf("Diameter : %.0lf\n", diamtr);
    printf("Circumference : %.3lf\n", circum);
    printf("Area : %.2lf\n", area);


    return 0;
}