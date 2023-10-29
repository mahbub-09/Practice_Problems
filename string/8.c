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
    gets(str);

    int letter = 0, digit = 0;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] >= '0' && str[i] <= '9')
            ++digit;

        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            ++letter;
    }

    printf("Letter: %d\n", letter);
    printf("Digits: %d\n", digit);




    return 0;
}
