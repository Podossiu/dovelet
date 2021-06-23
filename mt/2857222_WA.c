#include<stdio.h>
#include<stdlib.h>
void mountain(int x, int a)
{
    printf("%d", a);
    if( a < x) mountain(x, a+1);
    if(a == x) return ;
    printf("%d", a);
}
int main()
{
    mountain(4,1);
}

