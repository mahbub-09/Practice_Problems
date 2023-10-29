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

    ///bubble sort: O(n^2)
    for(int i = 0; i < strlen(str); ++i)
        for(int j = i+1; j < strlen(str); ++j)
            if(str[i] > str[j]){
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }

    puts(str);




    return 0;
}
