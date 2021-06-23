#include<stdio.h>
#include<stdlib.h>
int euclid(int x,int y)
{
    if( y == 0 ) return x;
    return euclid(y, x % y);
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d",euclid(a, b), a*b/euclid(a,b));
}

