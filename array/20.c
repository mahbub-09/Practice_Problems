//counting the total number of duplicate value across the array
#include <stdio.h>
int main()
{
    int n, dup_cnt = 0, temp;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    temp = arr[0];
    for(int i = 1; i < n; i++){
        if(temp == arr[i]){
            ++dup_cnt;
        }
        else{
            temp = arr[i];
        }
    }
    
    printf("Total Number Of Duplicate Values: %d\n", dup_cnt);


    return 0;
}