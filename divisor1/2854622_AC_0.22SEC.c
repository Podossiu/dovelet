#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b;
    long long int sum = 0;
    long long int i;
    scanf("%lld %lld", &a, &b);
    a = ceil(sqrt(a));
    for (i = a; i * i <= b; i++) {
        sum = (sum % 1000000003 + i*i % 1000000003)%1000000003;
    }
    printf("%lld %lld", i - a, sum);
}

