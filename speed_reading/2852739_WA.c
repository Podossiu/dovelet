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
            printf("%d\n", (int)(n/(float)s + 0.9));
        }else {
            count += (n/(s*t))*(t+r);
            if(n % (s*t) == 0) {
                count -= r;
            }else {
                count += (int)((n%(s*t))/(float)s + 0.9);
            }
            printf("%d\n", count);
        }
    }
}
