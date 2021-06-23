#include<stdio.h>
#include<string.h>

int main()
{
    char s[101];
    int i = 0;
    scanf("%s", s);
    int len = strlen(s);
    for (i = 0; i < len; i++) {
        printf("%c", s[i]);
        if( (len - i-1) % 3 == 0  && i != len-1) {
            printf(",");
        }
    }
}

