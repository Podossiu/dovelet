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
    for (i = 1; i < n; i++) {
        if(count+1 == k) {
            for (j = 0; j < n; j++) {
                printf("%d ",arr[j]);
            }
            break;
        }
        int temp = arr[i];
        for (j = i-1; j >= 0; j--) {
            if(temp <= arr[j]){
                arr[j+1] = arr[j];
            }else {
                break;
            }
        }
        arr[j+1] = temp;
        count++;
    }
}

