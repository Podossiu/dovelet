#include<stdio.h>
int main()
{
    int n,m,p,c;
    scanf("%d %d %d %d", &n, &m, &p, &c);
    printf("%d", -(((m+c)-p)-c-n));
}
