#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n, i, t, m;
    int count = 0;
    int sum = 0;
    scanf("%d", &n);
    scanf("%*d %d %d", &t,&m);
    count = m+t;
    for (i = 1; i < n; i++) {
        scanf("%*d %d %d", &t, &m);
        if(t < count) {
            sum += count - t;
            count = count + m;
        }else{
            count = t + m;
        }
    }
    printf("%.1f", sum/(float)n);
}
