#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *a;
    int i;
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n;i ++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n;i++) {
        printf("%d ", a[n-1-i]);
    }
    free(a);
}
