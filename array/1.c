#include <stdio.h>

int main()
{
    int arr[5];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for(int i = 0; i < 5; ++i){
        printf("%d", arr[i]);
        if(i < 5-1)
            printf(", ");
    }

    return 0;
}
