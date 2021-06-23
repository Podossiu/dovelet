#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    a < b ? printf("%d", a) : printf("%d", b);
}

