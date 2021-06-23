#include<stdio.h>
#include<math.h>
int binary_search(int *arr, int low, int high, int x);
int main()
{
    int arr[500000];
    int n;
    int i;
    int x;
    int count;
    scanf("%d", &n);
    for( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    count = binary_search(arr, 0, n-1, x);
    if ( count == -1) {
        printf("not found");
    }else {
        printf("%d", count+1);
    }
}
int binary_search(int *arr, int low, int high, int x)
{
    if(low > high) {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == x){
        return mid;
    }else if (arr[mid] > x) {
        binary_search(arr, low, mid-1, x);
    }else if (arr[mid] < x) {
        binary_search(arr, mid+1, high, x);
    }
}
