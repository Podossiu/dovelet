#include<stdio.h>
int main()
{
    int i;
    int fibo[41] = {0,1,1,2,3,5,8,};
    for (i = 3; i < 41; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    i = 1;
    while(1){
        int n;
        scanf("%d", &n);
        if( n < 2 ) {
            return 0;
        }
        int garo = 1;
        int sero = 1;
        int j = 2;
        while(n+1 != j) {
            if( j % 2 == 0) {
                garo += fibo[j];
            }else {
                sero += fibo[j];
            }
            j++;
        }
        printf("Case #%d:\n%d, %d\n\n", i,garo, sero);
        i++;
    }
}

