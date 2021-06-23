#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int *a, int *b);
int partition(int *arr, int start, int end);
void qsort_m(int *arr, int start, int end);
int main()
{
    int n,i, count = 1, index = 1;;
    int arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    qsort_m(arr, 0, n);
    printf("%d %d\n",arr[0], index);
    for (i = 1; i < n; i++) {
        if(arr[i-1] == arr[i]) {
            printf("%d %d\n", arr[i], index);
            count++;
        }else{
            index += count;
            printf("%d %d\n", arr[i], index);
            count = 1;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int *arr, int start, int end)
{
    int pivot = start;
    int i = start, j;
    for (j = start +1; j < end; j++) {
        if(arr[pivot] <arr[j]) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i], &arr[pivot]);
    return i;
}
void qsort_m(int *arr,int start, int end)
{
    int pivotindex;
    int i;
    if(start < end) {
        pivotindex = partition(arr, start, end);
        qsort_m(arr,start,pivotindex);
        qsort_m(arr,pivotindex+1,end);
    }
}
