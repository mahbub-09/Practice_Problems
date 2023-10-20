#include <stdio.h>

int cnt[100];  //declaring global array to work with index

int main()
{
    int n, i;
    printf("Enter Array Size: ");  //defining array size
    scanf("%d", &n);

    int arr[n];  //declaring main array
    printf("Enter Array Elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        cnt[arr[i]]++;  //checking number frequency
    }

    for(i = 0; i < 100; i++){
        if(cnt[i] == 1){
            printf("%d\n", i);  //printing unique values
        }
    }


    
    return 0;
}