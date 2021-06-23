#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a*b*c) -((a-2)*(b-2)*(c-2))-(a-2)*(b-2)*2-(a-2)*(c-2)*2 - (b-2)*(c-2)*2-8);
}
