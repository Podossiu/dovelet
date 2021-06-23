#include<stdio.h>
int main()
{
    int n;
    int i;
    int arr[101] = {};
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    while(1){
        int carry_1 = arr[n-1]/2;
        arr[n-1] /= 2;
        for (i = 0; i < n-1; i++) {
            int carry_2 = arr[i] / 2;
            arr[i] /= 2;
            arr[i] += carry_1;
            carry_1 = carry_2;
        }
        arr[n-1] += carry_1;
        for( i =0 ; i< n; i++) {
            if( arr[i] %2 == 1) {
                arr[i]++;
            }
        }
        count ++;

        for (i = 1; i < n; i++) {
            if( arr[i] != arr[0] ){
                break;
            }
            if(i == n-1) {
                printf("%d %d", count, arr[0]);
                return 0;
            }
        }
    }
}

