#include<stdio.h>
int main()
{
    int arr[10][10] = {};
    int n,i,j;
    int k = 1;
    scanf("%d", &n);
    i = 0;
    j = n/2;
    while(k != 3*n+1){
        arr[i][j] = k;
        if( k % n == 0 ) {
            i+=1;
            if( i > n-1 ) {
                i = 0;
            }
        }else{
            i -= 1;
            j += 1;
            if( i < 0 ) {
                i = n-1;
            }
            if( j > n-1 ){
                j = 0;
            }
        }
        k+=1;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}
