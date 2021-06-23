#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[5] = {}, i,check = 0;;
    for (i = 0; i < 5; i++) {
        int a;
        scanf("%d", &a);
        if(a % 5 >= 0) {
            if(arr[a%5] != 0) {
                printf("no");
                return 0;
            }
            arr[a%5]++;
        }else{
            if(arr[5+a%5] != 0) {
                printf("no");
                return 0;
            }
            arr[5+a%5]++;
        }
    }
    printf("yes");
}
