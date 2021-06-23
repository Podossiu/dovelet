#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int d, r;
    scanf("%d %d", &d, &r);
    char buffer[100];
    int i = 0;
    while(d) {
        char temp = d % r;
        if( temp > 9 ) {
            temp = temp + 'A' - 10;
        }else {
            temp = temp + '0';
        }
        buffer[i] = temp;
        d /= r;
        i++;
    }
    buffer[i] = '\0';
    int len = strlen(buffer);
    for(i = len-1; i >=0; i--) {
        printf("%c",buffer[i]);
    }
}
