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
                check = 1;
            }
            arr[a%5]++;
        }else{
            if(arr[5+a%5] != 0) {
                check = 1;
            }
            arr[5+a%5]++;
        }
    }
    if(check == 1) {
        printf("no");
    }else{
        printf("yes");
    }
}
