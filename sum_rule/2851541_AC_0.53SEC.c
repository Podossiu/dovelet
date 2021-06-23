#include<stdio.h>
#include<stdlib.h>
void radd(int, int);
int main()
{
    long long int mat[20][20];
    int n,m;
    int i,j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        mat[i][0] = 1;
    }
    for (i = 0; i < m; i++) {
        mat[0][i] = 1;
    }
    for (i = 1; i < n; i++) {
        for (j = 1; j < m; j++) {
           mat[i][j] = mat[i][j-1] + mat[i-1][j];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%lld ", mat[i][j]);
        }
        printf("\n");
    }
}

