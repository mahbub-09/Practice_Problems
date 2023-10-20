#include <stdio.h>
int main()
{
    float cel, far;
    printf("Input temperature in Celsius : "); //the problem says otherwise making an error
    scanf("%f", &cel);

    far = cel * ((float)9 / 5) + 32;

    printf("Temperature in Fahrenheit : %.1f", far); //the problem says otherwise and makes an error


    return 0;
}