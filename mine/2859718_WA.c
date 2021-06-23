#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, i,j,k;
    scanf("%d", &n);
    char arr_1[10][10] = {};
    char arr_2[10][10] = {};
    int ax[8] = {0,1,1,1,0,-1,-1,-1};
    int ay[8] = {1,1,0,-1,-1,-1,0,1};
    for (i = 0; i < n; i++) {
        scanf("%s", arr_1[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%s", arr_2[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if(arr_2[i][j] == '.') {
                printf(".");
        }else{
            if(arr_1[i][j] == '*') {
                printf("*");
            }else{
                int count = 0;
                for (k = 0; k < 8; k++) {
                    int dx = j + ax[k];
                    int dy = i + ay[k];
                    if((dx > -1 && dx < n) && (dy > -1 && dy < n)) {
                        if(arr_1[dy][dx] == '*'){
                            count++;
                        }
                    }
                }
                printf("%d",count);
            }
        }
        }
        printf("\n");
    }
}
