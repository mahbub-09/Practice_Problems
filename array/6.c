#include <stdio.h>
int main()
{
    int arr[7];

    for (int i = 0; i < 7; i++){
        scanf("%d", &arr[i]);
    }

    printf("Inputted values: \n");
    for (int i = (7 - 1); i >= 0 ; i--){
        printf("%d\n", arr[i]);
    }


    return 0;
}