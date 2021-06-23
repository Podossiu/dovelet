#include<stdio.h>
int divide_sum(int);
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int divide_s = divide_sum(i);
        if( divide_sum(divide_s) == i && divide_s > i) {
            printf("%d %d\n", i, divide_s);
        }
    }
}
int divide_sum(int a)
{
    int i;
    int sum = 1;
    for (i = 2; i * i <= a; i++) {
        if(a % i == 0) {
            sum+= (i + a/i);
        }
        if( i * i == a){
            sum -= i;
        }
    }
    return sum;
}
