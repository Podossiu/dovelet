#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if( n== 11 ) printf("CAN'T SEE!");
    else printf("%.6f", 60*(n%12)/11.0);
}

