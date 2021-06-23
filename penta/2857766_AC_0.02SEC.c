#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        float sqrt_1 = sqrt(25-12*(2-2*a));
        if(sqrt_1 == floor(sqrt_1)){
            if((-5+(int)sqrt_1)% 6 == 0){
                printf("%d Y\n", a);
            }else {
                printf("%d N\n",a);
            }
        }else{
            printf("%d N\n",a);
        }
    }
}

