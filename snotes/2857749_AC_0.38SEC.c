#include<stdio.h>
int main()
{
    int n,q;
    int i, j;
    scanf("%d %d", &n, &q);
    int arr[10001] = {-1,};
    for (i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
        arr[i] = arr[i] + arr[i-1];
    }
    for (i = 0; i < q; i++) {
        int a;
        scanf("%d", &a);
        for (j = 1; j <= n; j++) {
            if(arr[j] >= a) {
                printf("%d\n", j);
                break;
            }
        }
    }
}

