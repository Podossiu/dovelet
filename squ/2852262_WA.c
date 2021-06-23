#include<stdio.h>
#include<stdlib.h>
int gcd(int, int);
int main()
{
    int n,m;
    int i;
    scanf("%d %d", &n, &m);
    printf("%d",(m)/gcd(n,m)*(n)/gcd(n,m));


}
int gcd(int x, int y){
    while(1) {
        int temp = x;
        x = y;
        y = temp % y;
        if( y == 0) {
            return x;
        }
    }
}
