#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int i;
    double e = 1;
    printf("n e\n- -----------\n");
    printf("0 %.0lf\n",e);
    double count = 1;
    for(i = 2; i < 10; i++) {
        e += count;
        printf("%d ",i);
        printf("%.9lf\n", e);
        count *= 1/(double)i;
    }
}
