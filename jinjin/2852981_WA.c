#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int max_index = 0;
    int arr[7];
    int check = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        arr[i] = a+b-8;
        if(arr[max_index] < arr[i] && arr[i] > 0) {
            check = 1;
            max_index = i;
        }
    }
    if(check == 1) {
        printf("%d", max_index+1);
    }else{
        printf("0");
    }
}

