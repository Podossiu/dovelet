#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[1001];
    int i;
    fgets(buffer, 1001, stdin);
    int len = strlen(buffer);
    for ( i = len - 1; i >= 0; i--){
        if(buffer[i] != ' ') {
            printf("%c", buffer[i]);
        }
    }
}

