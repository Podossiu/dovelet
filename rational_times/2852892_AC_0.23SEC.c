#include<stdio.h>
#include<math.h>
int main()
{
    double temp;
    int n,i;
    double exp_sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &temp);
        exp_sum += log10(temp);
    }
    int digit = (int) exp_sum;
    printf("%.6lf %d", pow(10,exp_sum - digit),digit);
}
