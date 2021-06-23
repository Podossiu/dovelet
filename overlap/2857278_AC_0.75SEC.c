#include<stdio.h>
int main()
{
    int arr[201][201] = {};
    int a,b,c,d,i,j;
    int flag = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (i = a; i <= c; i++) {
        for (j = b; j <=d; j++) {
            arr[i][j] = 1;
        }
    }
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (i = a; i <= c; i++) {
        for (j = b; j <=d; j++) {
            if(arr[i][j] == 1) {
                flag = 1;
            }
        }
    }
    flag == 1 ? printf("Overlap") : printf("No overlap");
}

