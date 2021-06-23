#include<stdio.h>
int main()
{
    int fibo[45] = {0,2,3};
    int n,i;
    scanf("%d", &n);
    for( i = 3; i <= n; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    printf("%d", fibo[n]);
}

