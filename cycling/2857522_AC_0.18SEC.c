#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i;
    int arr[1000];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int start = 0;
    int end = 0;
    int check = 0;
    for (i = 0; i < n; i++) {
        if(arr[i+1] > arr[i]) {
            if( check == 0) {
                start = i;
                check = 1;
            }
            continue;
        }
        if(arr[i+1] <= arr[i]) {
            check = 0;
            end = i;
            if( max < arr[end] - arr[start]) {
                max = arr[end] - arr[start];
            }
        }
    }
    if(check == 1) {
        end = n-1;
        if( max < arr[end] - arr[start]) {
                max = arr[end] - arr[start];
        }
    }
    printf("%d", max);
}
