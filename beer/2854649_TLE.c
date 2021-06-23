#include<stdio.h>
#include<math.h>
int surface(int a,int b,int c)
{
    return (a*b+b*c+a*c)*2;
}
int main()
{
    int i,j;
    int n;
    int min = 10000000;
    int min_a,min_b,min_c;
    scanf("%d", &n);
    for (i = 1; i <=n; i++) {
        if(n % i == 0) {
            for (j = n/i; j > 0; j --) {
                if((n/i) % j == 0) {
                    if(min > surface(i,j,n/i/j)){
                        min = surface(i,j,n/i/j);
                        min_a = i;
                        min_b = j;
                        min_c = n/i/j;
                    }
                }
            }
        }
    }
    printf("%d %d %d", min_a, min_b, min_c);
}

