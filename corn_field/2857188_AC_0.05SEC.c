#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[251][251] = {};
    int n,b,k,i,j,l;
    int row,col;
    scanf("%d %d %d", &n, &b, &k);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < k; i++) {
        scanf("%d %d", &row, &col);
        int max = arr[row][col];
        int min = arr[row][col];
        for (j = row; j < row+b; j++) {
            for (l = col; l < col + b; l++) {
                if(max < arr[j][l]) {
                    max = arr[j][l];
                }
                if(min > arr[j][l]) {
                    min = arr[j][l];
                }
            }
        }
        printf("%d\n", max - min);
    }
}

