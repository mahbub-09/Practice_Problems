#include <stdio.h>
int main()
{
    long long int l, w;
    printf("Length of the rectangle = ");
    scanf("%lld", &l);
    printf("Width of the rectangle = ");
    scanf("%lld", &w);

    printf("Area of the rectangle = %lld\n", l * w);


    return 0;
}