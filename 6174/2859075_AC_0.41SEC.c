#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int x)
{
    int n = 0;
    int i, digit = 1;
    int arr[10] = {};
    while(x){
        arr[x%10] ++;
        x /= 10;
    }
    for(i = 9; i >= 0; i--) {
        while(arr[i]) {
            n = n * 10 + i;
            digit *= 10;
            arr[i]--;
        }
    }
    return n;
}
int min(int x)
{
    int n = 0;
    int i, digit = 1;
    int arr[10] = {};
    while(x){
        arr[x%10] ++;
        x /= 10;
    }
    for(i = 0; i < 10; i++) {
        while(arr[i]) {
            n = n * 10 + i;
            digit *= 10;
            arr[i]--;
        }
    }
    return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    while(n!= 6174){
        n = max(n) - min(n);
        count ++;
        if(n < 1000) {
            printf("5");
            return 0;
        }
    }
    printf("%d", count);
}

