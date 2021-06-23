#include<stdio.h>
int main()
{
    int a,b = 1;
    int i;
    int count = 0;
    int arr[100001] = {};
    scanf("%d", &a);
    while(b % a != 0){
        if( arr[b % a] == 2) {
            break;
        }
        if( b % a != b){
            arr[b % a]++;
        }
        b %= a;
        b *= 10;
    }
    for (i =0; i < a; i++) {
        if(arr[i] == 2){
            count++;
        }
    }
    printf("%d", count);
}
