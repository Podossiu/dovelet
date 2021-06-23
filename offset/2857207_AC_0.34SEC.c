#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j, k;
    int arr[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,-1,0,1};
    for(i = 0; i < 5;i ++) {
        for( j = 0; j < 5; j++) {
            int flag = 0;
            for (k = 0; k < 4; k++) {
                int ax = j + dx[k];
                int ay = i + dy[k];
                if( (ax < 5 && ax > -1) && (ay < 5 && ay> -1) && arr[ay][ax] != '*'){
                    if(arr[ay][ax] <= arr[i][j]) {
                        flag = 1;
                    }
                }
            }
            if( flag == 1) {
            printf("%d ", arr[i][j]);
            }else {
                printf("* ");
            }
        }
        printf("\n");
    }
}

