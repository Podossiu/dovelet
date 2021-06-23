#include <stdio.h>
#include <string.h>
int main()
{
    int r,c;
    int arr[9][9] = {};
    int i,j;
    char buffer[200];
    scanf("START %d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }
    scanf("%s", buffer);
    int anti[9][9] = {};
    for (i = 0; i < r-1; i++) {
        for (j = 0; j < c-1; j++) {
            anti[i][j] = (arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1])/4;
        }
    }
    for (i = 0; i < r-1; i++){
        for (j = 0; j < c-1; j++) {
            printf("%d", anti[i][j]);
        }
        printf("\n");
    }
}
