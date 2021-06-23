#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[81];
    int i, j = 0, k;
    fgets(buffer, 81, stdin);
    int len = strlen(buffer);
    for (i = 0; i < len-1; i++) {
        if(buffer[i] == ' '){
            for (k = i-1; k >= j; k--) {
                printf("%c",buffer[k]);
            }
            printf(" ");
        j = i+1;
        }
    }
    for (k = len-2; k >= j; k--) {
        printf("%c",buffer[k]);
    }
}

