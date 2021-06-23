#include<stdio.h>
#include<stdlib.h>
long long int gcd(long long int, long long int);
int main()
{
    long long int n,m;
    int i;
    scanf("%lld %lld", &n, &m);
    printf("%lld",(m)/gcd(n,m)*(n)/gcd(n,m));


}
long long int gcd(long long int x, long long int y){
    while(1) {
        long long int temp = x;
        x = y;
        y = temp % y;
        if( y == 0) {
            return x;
        }
    }
}
