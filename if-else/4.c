#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num % 4 == 0 && num % 400 == 0)
    {
        printf("%d is divisible by both 4 &400\n", num);
    }
    else
    {
        printf("%d is not divisible by both 4 &400\n", num);
    }




    return 0;
}
