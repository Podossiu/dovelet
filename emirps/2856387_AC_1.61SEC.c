#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rev(int a)
{
    int r;
    while(a){
        r = r * 10 + a % 10;
        a /= 10;
    }
    return r;
}
int isprime(int a)
{
    int i;
    for (i = 2; i * i <= a; i++) {
        if(a % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int temp_1 = isprime(n);
    int temp_2 = isprime(rev(n));
    if( temp_1 && temp_2) {
        printf("%d is an emirp", n);
    }else if( temp_1 ){
        printf("%d is a prime", n);
    }else{
        printf("%d is not prime", n);
    }
}
