#include <stdio.h>
int main()
{
    double m, cm, km;
    printf("Enter a value in meter ");
    scanf("%lf", &m);

    cm = m * 100;
    km = m / 1000;

    printf("%.0lf m = %.0lf cm\n", m, cm);
    printf("%.0lf cm = %.03lf km\n", cm, km);


    return 0;
}