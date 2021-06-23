#include<stdio.h>
#include<stdlib.h>
int binary_search(int *arr, int low ,int high, int n){
    if (low == high) {
        return low;
    }
    int mid = (low+high)/2;
    if(arr[mid] == n) {
        return mid;
    }
    if (arr[mid] < n && arr[mid+1] >= n) {
        return mid+1;
    }
    if(arr[mid] > n) {
        return binary_search(arr, low, mid-1, n);
    }
    return binary_search(arr, mid+1, high, n);
}
int main()
{
    int n, q, i;
    int arr[50001] = {-1,};
    scanf("%d %d", &n, &q);
    for (i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
        arr[i] = arr[i-1] + a;
    }
    for (i = 0; i < q; i++) {
        int a;
        scanf("%d", &a);
        printf("%d\n",binary_search(arr, 1, n, a));
    }
}
