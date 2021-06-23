#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isprime(int a)
{
    int i;
    for (i = 2; i * i <= a; i++) {
        if( a % i == 0 ) {
            return 0;
        }
    }
    return 1;
}
int palindrome(int a)
{
    int r = 0;
    int temp = a;
    while(temp) {
        r = r * 10 + temp% 10;
        temp /= 10;
    }
    if( a == r ){
        return 1;
    }
    return 0;
}

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        if(palindrome(i) && isprime(i)) {
            printf("%d\n", i);
        }
    }
}
