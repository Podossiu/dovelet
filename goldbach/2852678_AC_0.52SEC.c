#include<stdio.h>
#include<string.h>
int goldbach(int);
int isprime(int);
int main()
{
    int n;
    scanf("%d", &n);
    goldbach(n);
}
int goldbach(int n)
{
    int i;
    for (i = 3; i<= n/2; i++) {
        if(isprime(i) && isprime(n-i)) {
            printf("%d = %d + %d", n,i, n-i);
            return 0;
        }
    }
}
int isprime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}
