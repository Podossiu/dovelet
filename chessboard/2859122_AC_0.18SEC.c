#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    int i = 0;
    scanf("%d", &n);
    while((i+1) * (i+1) < n) {
        i++;
    }
    if( (i+1) % 2 == 0) {
        n -= i*i;
        n < (i+1) ? printf("%d %d", n,i+1) : printf("%d %d", i+1, 2*i+2-n);
    }else {
        n -= i * i;
        n < (i+1) ? printf("%d %d", i+1, n) : printf("%d %d", 2*i+2-n, i+1);
    }
}

