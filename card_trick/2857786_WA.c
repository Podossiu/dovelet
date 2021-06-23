#include<stdio.h>
int main()
{
    int n,i,j;
    int temp = 0;
    scanf("%d", &n);
    int arr[14] = {};
    for (i = 1; i <= n; i++){
        int count = 0;
        while(1){
            if(arr[temp] == 0) {
                count++;
            }
            if(count == i+1) {
                break;
            }
            temp++;
            temp %= n;
        }
        arr[temp] = i;
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

