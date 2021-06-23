#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3];
    int i,j;

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++) {
            a[i][j] = 0;
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            int temp;
            scanf("%d", &temp);
            if(a[i/3][j/3] < temp){
                a[i/3][j/3] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j <3; j++) {
            printf("%d\n", a[i][j]);
        }
    }
}

