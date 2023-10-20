#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter Array Size: "); //declaring array size
    scanf("%d", &n);

    //scanning array & taking sum of even values
    int arr[n];
    printf("Enter Array Elements: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }

    printf("Sum of Even Numbers = %d\n", sum);



    return 0;
}