#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b,n, i,sum = 0;
    scanf("%d %d", &n, &a);
    for (i = 1; i < n; i++) {
        scanf("%d", &b);
        sum += (1<<(b-a));
    }
    printf(sum - (n-1)*n*(2*n-1)/6 ? "Not jolly" : "Jolly");

}
