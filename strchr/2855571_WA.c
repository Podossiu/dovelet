#include<stdio.h>
#include<string.h>
#include<stdlib.h>
const char* strchr_t(const char *s, int c)
{
    while(*s){
        if( (*s) == c) {
            return s;
        }
        s++;
        printf("%c %c\n", *s, c);
    }
    return -1;
}
int main()
{
    char buffer[1001];
    char c;
    scanf("[^\n]", buffer);
    getchar();
    scanf("%c", &c);
    const char* temp = strchr_t(buffer,c);
    if(temp != -1) {
    printf("%d", temp - buffer);
    }else{
        printf("Not found");
    }
}
