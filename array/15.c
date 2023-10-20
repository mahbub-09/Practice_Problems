#include <stdio.h>
int main()
{
    int n, max, sec_max;
    printf("Enter Array Size : ");
    scanf("%d", &n);


    //inputting array
    int arr[n];
    printf("Enter Array Elements : \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }


    //assuming max value and finding it
    max = arr[0] > arr[1] ? arr[0]:arr[1];
    for(int i = 2; i < n; i++){
        max = max > arr[i] ? max:arr[i];
    }


    //replacing max value with any element from the array
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            arr[i] = arr[n-i]; //if the maximum value resides at 1st or last index we face difficulties
        }
    }


    //finding second max value
    max = arr[0] > arr[1] ? arr[0]:arr[1];
    for(int i = 2; i < n; i++){
        max = max > arr[i] ? max:arr[i];
    }

    printf("Second Max: %d\n", max);

    return 0;
}