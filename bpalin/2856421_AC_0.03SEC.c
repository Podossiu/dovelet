#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int palindrome(char* arr)
{
    int len = strlen(arr);
    int i;
    for (i = 0; i < len/2; i++) {
        if(arr[i] != arr[len -1 - i]) {
            return 0;
        }
    }
    return 1;
}
char* notation(int a)
{
    char *b = (char *)malloc(sizeof(char) * 100);
    int i = 0;
    while(a) {
        b[i] = a % 2 + '0';
        a /= 2;
        i++;
    }
    b[i] = '\0';
    return b;
}
int main()
{
    int i;
    for(i = 1; i <= 100000; i++) {
        if(palindrome(notation(i))) {
            printf("%d\n", i);
        }
    }
}
