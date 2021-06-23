#include<stdio.h>
int main()
{
    int arr[1001][1001] = {};
    int i,j,k;
    int count = 0;
    for (i = 0;i < 4; i++) {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (j = x1; j < x2; j++) {
            for (k = y1; k<y2; k++) {
                arr[j][k] = 1;
            }
        }
    }

    for (i = 0; i< 1001; i++) {
        for (j = 0; j < 1001; j++) {
            count += arr[i][j];
        }
    }
    printf("%d", count);
}

