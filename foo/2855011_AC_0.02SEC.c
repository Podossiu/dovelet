#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char buffer[257];
    while(scanf("%s", buffer) != EOF) {
        char *ptr;
        while(ptr = strstr(buffer, "FOO")){
            ptr[0] = 'O';
            ptr[1] = 'O';
            ptr[2] = 'F';
        }
        printf("%s\n", buffer);
    }
}
