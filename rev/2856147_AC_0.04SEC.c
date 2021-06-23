#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int radd(int a)
{
    int r = 0;
    int temp = a;
    while(temp) {
        r = r * 10 + temp % 10;
        temp /= 10;
    }
    return r + a;
}
char* reverse(char *a)
{
    int len = strlen(a);
    char *b = (char *)malloc(sizeof(char)* len+1);
    int i;
    for (i = 0; i < len; i++) {
        b[i] = a[len-1-i];
    }
    return b;
}
int main()
{
    int i;
    for ( i = 10; i <= 100000; i++) {
        int temp = radd(i);
        char arr[100] = {};
        int j = 0;
        while(temp){
            arr[j++] = temp % 10 + '0';
            temp /= 10;
        }
        arr[j] = '\0';
        char *temp_c = reverse(arr);
        if(atoi(temp_c) == atoi(arr)){
            printf("%d\n", i);
        }
    }
}
