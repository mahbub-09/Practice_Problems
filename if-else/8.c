#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper Case\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower Case\n");
    }
    
    

    return 0;
}
