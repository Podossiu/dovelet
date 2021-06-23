#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* delspace(char *s)
{
    char *ret = s;
    while(*s){
        *(ret) = *s;
        if( *ret != ' ') {
            ret++;
        }
        s++;
    }
    *ret = '\0';
}
int main()
{
    char buffer[1001];
    scanf("%[^\n]", buffer);
    delspace(buffer);
    printf("%s", buffer);
}
