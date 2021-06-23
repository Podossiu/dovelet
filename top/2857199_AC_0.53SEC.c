#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", arr[0] + 3*arr[1] + 3*arr[2] + 3*arr[3] +
           6*arr[4] + 3* arr[5] + arr[6] + 3* arr[7] + 3* arr[8] + arr[9]);
}

