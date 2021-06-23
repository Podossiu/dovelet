#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* delspace(char *s)
{
    int i = 0,j = 0;
    while(s[i]){
        if(s[i] == ' ') {
            i++;
            continue;
        }
        s[j] = s[i];
        i++;
        j++;
    }
    s[j] = '\0';
}
int main()
{
    char buffer[1001];
    scanf("%[^\n]", buffer);
    delspace(buffer);
    printf("%s", buffer);
}
