#include<stdio.h>
#include<math.h>
int partition(int *, int, int);
void qsort(int *,int, int);
void swap(int *,int*);
int count = 0;
int main()
{
    int arr[1000];
    int n;
    int i;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort(arr,0,n-1);
    printf("%d", count);
}
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    count ++;
}
int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low+1, j = low;
    while(i <= high) {
        if(arr[i] < pivot) {
            swap(&arr[i], &arr[++j]);
        }
        i++;
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void qsort(int *arr, int low, int high)
{
    int pivot_index;
    if(low < high) {
        pivot_index = partition(arr, low, high);
        qsort(arr, low, pivot_index-1);
        qsort(arr, high, pivot_index+1);
    }
}
