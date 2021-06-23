#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n == 2 || n == 3) {
        printf("%d", n - 2);
        return 0;
    }
    n%2 == 0 ?  printf("%d", n/2): printf("%d", n-1);

}
