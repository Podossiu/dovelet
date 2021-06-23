#include<stdio.h>
#include<stdlib.h>
long long int euclid(long long int x,long long int y)
{
    if( y == 0 ) return x;
    return euclid(y, x % y);
}
int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    printf("%lld %lld",euclid(a, b), a*b/euclid(a,b));
}

