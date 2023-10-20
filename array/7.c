#include <stdio.h>
int main()
{
    char arr[5];

    for (int i = 0; i < 5; i++){
        scanf(" %c", &arr[i]);
    }

    printf("Vowels: \n");
    for (int i = 0; i < 5; i++){
        printf("%c\n", arr[i]);
    }


    return 0;
}