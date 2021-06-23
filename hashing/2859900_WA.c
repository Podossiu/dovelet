#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reverse(int a)
{
    int r = 0;
    while(a) {
        r = r*10 + a % 10;
        a /= 10;
    }
    return r;
}
int main()
{
    int a,b,c;
    scanf("%d$%d$%d", &a,&b,&c);
    printf("%d",reverse(a)+b+reverse(c));
}
