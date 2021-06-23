#include<stdio.h>
int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    int digit = 1;
    for (i = 0; i < n/2; i++) {
        digit *= 10;
    }
    for (i = 0; i < digit; i++) {
        for(j = 0; j < digit; j++) {
            if((i + j)*(i + j) == (i)*digit + j){
                printf("%0*d%0*d\n",n/2,i,n/2,j);
            }
        }
    }
}
