#include <stdbool.h>
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
    printf("String1: ");
    gets(str);

    for(int i = 0; i < strlen(str); ++i){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;

        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    puts(str);




    return 0;
}
