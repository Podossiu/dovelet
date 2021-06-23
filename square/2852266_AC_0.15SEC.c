#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,m;
    int i;
    int sum = 0;
    scanf("%d %d", &n, &m);
    int start = (int)sqrt(n);
    if(start * start != n) {
        start += 1;
    }
    for (i = start; i * i <= m; i++) {
        sum += i*i;
    }
    if ( sum == 0 ){
        printf("-1");
        return 0;
    }
    printf("%d\n", sum);
    printf("%d\n", start * start);
}
