#include<stdio.h>
int main()
{
    int arr[30];
    int n;
    int i,j,k;
    int count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i+1; j< n; j++) {
            int temp = arr[j] - arr[i];
            for (k = j+1; k; k++){
                if( arr[k] - arr[j] > temp) {
                    break;
                }
                if( arr[k] - arr[j] == temp) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);

}
