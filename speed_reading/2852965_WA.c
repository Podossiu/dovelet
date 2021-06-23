#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,i;
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++) {
        int s,t,r;
        int temp = n;
        int count = 0;
        int time = 0;
        scanf("%d %d %d", &s, &t, &r);
        while(temp - s*t > 0) {
            temp -= s*t;
            count += t+r;
        }
        count += (int)((temp/(float)s)+0.9);
        printf("%d\n", count);
    }
}

