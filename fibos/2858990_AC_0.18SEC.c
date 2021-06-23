#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer_1[10001];
    char buffer_2[10001];
    int n, i;
    scanf("%d", &n);
    scanf("%s %s",buffer_1, buffer_2);
    printf("%s\n%s\n", buffer_1, buffer_2);
    for(i =0 ; i < n-2; i++) {
        char temp[10001];
        strcat(buffer_1,buffer_2);
        printf("%s\n",buffer_1);
        strcpy(temp, buffer_1);
        strcpy(buffer_1, buffer_2);
        strcpy(buffer_2, temp);
    }
}

