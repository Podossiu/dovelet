#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n,k;
    int i,j;
    int count = 0;
    scanf("%d %d", &n, &k);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        count ++;
        if(count == k) {
            for (j = 0; j < n; j++) {
                printf("%d ", arr[j]);
            }
            break;
        }
    }
    free(arr);
}

