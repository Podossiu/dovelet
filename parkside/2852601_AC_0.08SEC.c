#include<stdio.h>
int main()
{
    int arr[30][30] = {};
    int i,j;
    int r,s;
    scanf("%d %d", &r, &s);
    for (i = 0; i < r; i++) {
        for (j = 0; j <= i;j++) {
            arr[j][i] = s;
            s+=1;
            if(s == 10) {
                s = 1;
            }
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < i; j++) {
            printf("  ");
        }
        for (j = i; j < r; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
