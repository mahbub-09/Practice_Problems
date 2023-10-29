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

    char ch;
    printf("Character to be Searched: ");
    scanf("%c", &ch);

    int idx = -1;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == ch){
            idx = i;
            break;
        }
    }

    if(idx != -1)
        printf("First occurrences of %c is at index %d\n", ch, idx);

    else
        printf("%c is Not Found\n", ch);




    return 0;
}
