#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[500001] = {1,1,};
    int arr_2[10001] = {0};
    int n, k, i, j, l = 0;
    scanf("%d %d", &n, &k);
    for (i = 2; i < n; i++) {
        if(arr[i] == 0) {
            for (j = 2 * i; j < n; j += i) {
                arr[j] = 1;
            }
            arr_2[l++] = i;
        }
    }
    for (i = 0; i < l; i++) {
        int count = 0;
        int sum = 0;
        for (j = i; j < l; j++) {
            sum += arr_2[j];
            count ++;
            if( count == k ){
                break;
            }
        }
        if(count == k && sum == n) {
            printf("yes");
            return 0;
        }
    }
    printf("no");
}

