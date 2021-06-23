#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    n % 2 == 0 ? printf("%d", (n/2)*(n/2+1)) : printf("%d", ((n/2)*(n/2-1))/2 + (n/2+1)*(n/2)/2);
}
