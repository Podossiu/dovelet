#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(char *a){
    int len_a = strlen(a);
    int i;
    for(i = 0; i <len_a/2; i++){
        swap(&a[i], &a[len_a-i-1]);
    }
}
char* radd(char *a,char* b)
{
    reverse(a);
    reverse(b);
    int c = atoi(a);
    int d = atoi(b);
    char e[100];
    int temp = c+d;
    int i = 0;
    while(temp){
        e[i] = temp % 10 + '0';
        temp /= 10;
        i++;
    }
    e[i] = '\0';
    printf("%s\n", e);
}
int main()
{
    char buffer1[10], buffer2[10];
    scanf("%s %s", buffer1, buffer2);
    radd(buffer1, buffer2);
}
