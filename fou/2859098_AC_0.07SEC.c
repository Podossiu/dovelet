#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[3];
    int i,j;
    scanf("%d %d %d",&arr[0], &arr[1], &arr[2]);
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i;j ++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    if( arr[1] - arr[0] > arr[2] -arr[1]) {
        printf("%d", arr[0] + arr[2] - arr[1]);
    }else if (arr[1] - arr[0] < arr[2] - arr[1]) {
        printf("%d", arr[1] + arr[1] - arr[0]);
    }else{
        printf("%d", arr[2] + arr[2] - arr[1]);
    }
}

