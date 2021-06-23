#include<stdio.h>
#include<stdlib.h>
int sum(int, int);
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d", sum(sum(a,b),sum(c,d)));
}
int sum(int x, int y)
{
    return x+y;
}
