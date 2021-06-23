#include<stdio.h>
int main()
{
    int n,k;
    int i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++) {
        int s,t,r, count = 0;
        scanf("%d %d %d", &s,&t,&r);
        if(s*t >= n) {
            printf("%d\n", n/s);
        }else {
            count += (n/(s*t))*(t+r);
            count += (int)((n%(s*t))/(float)s + 0.9);
            printf("%d\n", count);
        }
    }
}
