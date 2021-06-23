#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a;
    int n = 0,m = 0;
    int i,j, k;
    a = (int **)malloc(sizeof(int*) * 9);
    for (i = 0 ; i< 9 ;i++) {
        a[i] = (int *)malloc(sizeof(int) * 9);
    }
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 9; i++){
        m = (i / 3)*3;
        n = (i%3)*3;
        int count = 0;
        for (j = 0; j < 3;j ++) {
            for (k = 0; k < 3; k++) {
                count += a[m+j][n+k];
            }
        }
        printf("%d\n", count);
    }
    for (i = 0; i < 9; i++){
        free(a[i]);
    }
    free(a);
}


