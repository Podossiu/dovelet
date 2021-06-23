#include<stdio.h>
int main(a,b,c,d)
{
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",a*d > b*c ? 1 : a*d < b*c ? -1 : 0);
}
