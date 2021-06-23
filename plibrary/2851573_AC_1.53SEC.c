#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a;
    int n,m;
    int i,j;

    scanf("%d %d", &n, &m);
    a = (int **)malloc(sizeof(int*) * m);
    for (i = 0 ; i< n ;i++) {
        a[i] = (int *)malloc(sizeof(int) * n);
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0 ; j< m; j++) {
            if(a[j][i] != 1) {
                break;
            }
            if( j == m-1) {
                printf("yes");
                return 0;
            }
        }
    }
    printf("no");
}

