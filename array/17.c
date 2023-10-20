#include <stdio.h>
int main()
{
    int n, evencnt = 0, oddcnt = 0;
    printf("Input array size: ");  //defining array size
    scanf("%d", &n);

    int arr[n];
    printf("Input element in the array : \n");  //scanning array
    for(int i = 0; i < n; i++){
        printf("element - %d : ", i+1);
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0){
            ++evencnt;
        }
        else{
            ++oddcnt;
        }
    }

    //inserting array into separate arrays
    int evenarray[evencnt], oddarray[oddcnt];
    for(int i=0, j=0, k=0; i < n; i++){
        if(arr[i] % 2 == 0){
            evenarray[j] = arr[i];
            j++;
        }
        else{
            oddarray[k] = arr[i];
            k++;
        }
    } 


    //printing arrays
    printf("The Even elements are :\n");
    for(int i = 0; i < evencnt; i++){
        printf("%d ", evenarray[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(int i = 0; i < oddcnt; i++){
        printf("%d ", oddarray[i]);
    }

    return 0;
}