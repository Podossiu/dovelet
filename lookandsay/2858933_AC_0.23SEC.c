#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[1001];
    scanf("%s", buffer);
    int i =1;
    int count = 1;
    while(buffer[i]){
        if(buffer[i-1] != buffer[i]) {
            printf("%d%c", count, buffer[i-1]);
            count = 0;

        }
        count++;
        i++;
    }
    printf("%d%c", count,buffer[i-1]);
}

