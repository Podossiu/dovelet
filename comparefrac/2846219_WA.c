#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%d",(a/b) > (c/d) ? 1 : ((a/b) < (c/d) ? -1 : 0));
}
