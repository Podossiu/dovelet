#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[3];
    int i,j;
    scanf("%d %d %d",&arr[0], &arr[1], &arr[2]);

    if( arr[1] - arr[0] > arr[2] -arr[1]) {
        printf("%d", arr[0] + arr[2] - arr[1]);
    }else if (arr[1] - arr[0] < arr[2] - arr[1]) {
        printf("%d", arr[1] + arr[1] - arr[0]);
    }else{
        printf("%d", arr[2] + arr[2] - arr[1]);
    }
}

