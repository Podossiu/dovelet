#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count = 0;
    int n;
    int i;
    scanf("%d", &n);
    for (i = 2; i * i <= n; i++){
        if ( n % i == 0 ) {
            count += 2;
        }
        if (i * i == n) {
            count -= 1;
        }
    }
    if( count % 2 == 1) {
        printf("yes");
    }else {
        printf("no");
    }
}

