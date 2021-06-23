#include<stdio.h>
int binary(int);
int main()
{
    int n;
    scanf("%d", &n);
    binary(n);
}
int binary(int n)
{
    if(n >= 2) binary(n/2);
    printf("%d", n%2);
}
