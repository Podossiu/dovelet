#include<stdio.h>
#include<stdlib.h>
int gcd(int, int);
int main()
{
    int n, i;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int gcd_t = arr[0];
    for (i = 1; i < n; i++) {
        gcd_t = gcd(gcd_t, arr[i]);
    }
    printf("%d", gcd_t);
}
int gcd(int x, int y)
{
    return (y != 0 ? gcd(y, x % y) : x);
}
