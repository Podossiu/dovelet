#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[101];
    char octa[101] = {};
    scanf("%s", s);
    int i,len = strlen(s);
    int j = (len-1)/3, digit = 1;
    octa[j+1] = '\0';
    for ( i = len-1; i >= 0; i--) {
        if(digit == 1) {
            octa[j] += '0';
        }
        octa[j] += (s[i] - '0') * digit;
        digit *= 2;
        if(digit == 8) {
            digit = 1;
            j --;
        }
    }
    printf("%s", octa);
}

