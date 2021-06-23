#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[40] = {};
    int i;
    for(i=0;;i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) {
            break;
        }
    }
    int j = 0;
    for(i =0; arr[i] !=0; i++) {
        if( arr[i] != arr[i+1]) {
            printf("%d %d ", i - j + 1, arr[i]);
            j = i+1;
        }
    }
}
