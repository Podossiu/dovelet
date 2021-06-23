#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int *a;
    int i;
    int min = 99999999;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n;i ++){
        scanf("%d", &a[i]);
        if ( min > a[i] ) {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++) {
        if(min == a[i]) {
            printf("%d ", i+1);
        }
    }
    free(a);
}
