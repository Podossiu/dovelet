#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    int i, a,b,c;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &a,&b,&c);
        int *arr = (int *)malloc(sizeof(int) * c);
        int j;
        arr[0] = a;
        arr[1] = b;
        for(j = 2; j < c; j++) {
            arr[j] = arr[j-1] + arr[j-2];
        }
        printf("%d\n", arr[c-1]);
        free(arr);
    }
}

