#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a;
    int i;
    int count = 0;
    scanf("%d %d", &n, &a);
    for (i = 1; i <= n; i++) {
        int temp = i;
        while(temp) {
            if ( temp % 10 == a ) {
                count++;
            }
            temp /= 10;
        }
    }
    printf("%d", count);
}
