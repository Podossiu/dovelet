#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char binary[31];
    unsigned int dec = 0;
    int i = 0;
    scanf("%s", binary);
    int len = strlen(binary);
    int digit = 1;
    for (i = len-1; i >= 0; i--) {
        dec += digit * (binary[i] - '0');
        digit *= 2;
    }
    printf("%d", dec);
}
