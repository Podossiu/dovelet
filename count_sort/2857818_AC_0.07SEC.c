#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,j = 0;
    int max= 0;
    int *arr;
    int *buffer;
    scanf("%d", &n);
    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    buffer = (int *)malloc(sizeof(int) *(max+1));
    memset(buffer, 0, sizeof(int) * (max+1));
    for (i = 0; i < n; i++) {
        buffer[arr[i]]++;
    }
    for (i = 0; i <= max; i++) {
        while(buffer[i] !=0) {
            arr[j++] = i;
            buffer[i]--;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    free(arr);
    free(buffer);
}

