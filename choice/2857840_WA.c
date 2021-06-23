#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, i;
    int arr[101][2];
    int count = 0;
    scanf("%d", &n);
    for (i = 1; i <= n;i ++){
        scanf("%d", &arr[i][0]);
    }
    for (i = 1; i <= n; i++) {
        arr[i][1] = 0;
    }
    for (i = 1; i <= n; i++) {
        if( i == arr[arr[i][0]][0] ||  arr[i][0] == i) {
            count ++;
            arr[i][1] = 1;
        }
    }
    printf("%d\n", count);
    for (i = 1; i <=n; i++) {
        if(arr[i][1] == 1) {
            printf("%d\n", arr[i][0]);
        }
    }

}

