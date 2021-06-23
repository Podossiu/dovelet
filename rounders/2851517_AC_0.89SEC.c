#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int digit = 1;
    while(n/10> 0) {
        n = (n+5)/10;
        digit *= 10;
    }
    printf("%d",n*digit);
}
