#include<stdio.h>
int main(a,b)
{
    scanf("%d %d", &a, &b);
    printf("%c",a > b? '>' : ((a < b) ? '<' : '='));
}
