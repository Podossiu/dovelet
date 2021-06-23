#include<stdio.h>
int triple(int a)
{
    return a*a*a;
}
int main()
{
    int n;
    int i,j,k,l;
    int count_1 = 0,count_2 = 0,count_3 = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int cube = triple(i);
        for (j = 2; j <= n; j++) {
            count_1 = triple(j);
            if(count_1 > cube) {
                break;
            }
            for (k = j; k <= n; k++) {
                count_2 = count_1 + triple(k);
                if(count_2 > cube) {
                    break;
                }
                for (l = k; l <=n ; l++) {
                    count_3 = count_2 + triple(l);
                    if(count_3 > cube) {
                        break;
                    }
                    if(count_3 == cube) {
                        printf("Cube = %d, Triple = {%d,%d,%d}\n",i,j,k,l);
                        break;
                    }
                }
            }
        }
    }
}
