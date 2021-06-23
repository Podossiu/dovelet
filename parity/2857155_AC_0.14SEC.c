#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr_2[100][2] = {};
    int n,i,j;
    int count_1 = 0, count_2 = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            int a;
            scanf("%d", &a);
            arr_2[i][0] += a;
            arr_2[j][1] += a;
        }
    }
    for (i = 0; i < n; i++) {
        if(arr_2[i][0] % 2 == 1) {
            count_1++;
        }
        if(arr_2[i][1] % 2 == 1) {
            count_2++;
        }
    }
    if( count_1 == 0 && count_2 == 0){
        printf("ok");
    }else if( count_1 == 1 && count_2 == 1) {
        printf("change bit (");
        for(i =0; i < n; i++) {
            if(arr_2[i][0] % 2 == 1) {
                printf("%d,", i+1);
            }
        }
        for(i =0; i < n; i++) {
            if(arr_2[i][1] % 2 == 1) {
                printf("%d)", i+1);
            }
        }
    }else {
        printf("error");
    }

}

