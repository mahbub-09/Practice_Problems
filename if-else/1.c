#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        printf("%d is maximum\n\n", num1);
        printf("%d is minimum\n", num2);
    }
    else
    {
        printf("%d is maximum\n\n", num2);
        printf("%d is minimum\n", num1);
    }




    return 0;
}
