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

    int cnt = 0;
    for(int i = 0; str[i] != '\0'; ++i){
        if(str[i] == ch){
            ++cnt;
        }
    }

    if(cnt)
        printf("Character %c has been occurred %d times\n", ch, cnt);

    else
        printf("%c is Not Found\n", ch);




    return 0;
}
