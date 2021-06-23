#include<stdio.h>
#include<math.h>
long long int surface(long long int a,long long int b,long long int c)
{
    return (a*b+b*c+a*c)*2;
}
int main()
{
    long long int i,j;
    long long int n;
    long long int min = 10000000;
    long long int min_a,min_b,min_c;
    scanf("%lld", &n);
    for (i = 1; i <=n; i++) {
        if(n % i == 0) {
            for (j = n/i; j > 0; j --) {
                if((n/i) % j == 0) {
                    if(min > surface(i,j,n/i/j)){
                        min = surface(i,j,n/i/j);
                        min_a = i;
                        min_b = j;
                        min_c = n/i/j;
                    }
                }
            }
        }
    }
    printf("%lld %lld %lld", min_a, min_b, min_c);
}

