#include<stdio.h>
int main(s)
{
    scanf("%d", &s);
    printf("%d %d %d %d", s/(3600*24), (s%(3600*24))/3600, (s%3600)/60, s%60);
}
