#include <stdio.h>
int main()
{
    int n, max, min, diff;
    printf("Array size = ");
    scanf("%d", &n);
    int arr[n];

    //Taking array element as input from user
    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    //determining the maximum value
    max = (arr[0] > arr[1]) ? arr[0] : arr[1];
    for (int i = 2; i < n; i++){
        max = (max > arr[i]) ? max : arr[i];
    }

    //determining the minimum value
    min = (arr[0] < arr[1]) ? arr[0] : arr[1];
    for (int i = 2; i < n; i++){
        min = (min < arr[i]) ? min : arr[i];
    }

    //determining the difference between maximum & minimum value
    diff = max - min;
    printf("Difference = %d\n", diff);
    


    return 0;
}