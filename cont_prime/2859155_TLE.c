#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[500001] = {1,1,};
    int n, k, i, j;
    scanf("%d %d", &n, &k);
    for (i = 2; i < n; i++) {
        if(arr[i] == 0) {
            for (j = 2 * i; j < n; j += i) {
                arr[j] = 1;
            }
        }
    }
    for (i = 2; i <=n; i++) {
        int count = 0;
        int sum = 0;
        for (j = i; j <=n; j++) {
            if(arr[i] == 0) {
               sum += i;
               count ++;
            }
            if(count == k) {
                break;
            }
        }
        if( sum == n && count == k){
            printf("yes");
            return 0;
        }
    }
    printf("no");
}

