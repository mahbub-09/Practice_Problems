#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char str[500];
    printf("String: ");
    gets(str);


    int vowel = 0, consonant = 0;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
           str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
           ++vowel;
           }

        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            ++consonant;
    }

    printf("Vowel = %d\n", vowel);
    printf("Consonant = %d\n", consonant);




    return 0;
}
