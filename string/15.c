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
    gets(str);

    int space = 0;
    for(int i = 0; i < strlen(str); ++i){
        if(str[i] == ' ')
            ++space;
    }

    printf("%d words\n", ++space);




    return 0;
}
