#include<stdio.h>
int main()
{
    int n,i,j;
    int arr[30][30] = {};
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if(i ==j || j ==0) {
                arr[i][j] = 1;
            }else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    for (i = 0; i < n;i ++){
        for (j = 0; j <=i; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
