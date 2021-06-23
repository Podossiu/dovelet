#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++) {
        int s,t,r;
        int count = 0;
        scanf("%d %d %d", &s, &t, &r);
        if(n <= s*t) {
            count += (int)(n/(float)s+0.9);
        }else{
        if(n %(s*t) == 0) {
            count += (n/(s*t)-1) * (t+r) + t;
        }else {
            count += (n/(s*t)) * (t+r) + (int)((n%(s*t))/(float)s +0.9);
            }
        }
        printf("%d\n",count);
    }
}

