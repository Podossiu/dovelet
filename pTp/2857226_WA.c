#include<stdio.h>
#include<stdlib.h>
void ptp(int x, int a)
{
    printf("1%d", a);
    if (a < x) ptp(x , a+1);
    if (a != x) printf("1%d", a);
    if( a == 2 ) {
        printf("1");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    ptp(n,2);
}

