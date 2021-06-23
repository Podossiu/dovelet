#include<stdio.h>
int upstair(int);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", upstair(n));
}
int upstair(int x)
{
    if(x==1) {
        return 1;
    }else if (x == 2) {
        return 2;
    }
    return upstair(x - 2) + upstair(x - 1);
}
