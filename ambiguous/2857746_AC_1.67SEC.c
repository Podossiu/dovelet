#include<stdio.h>
int main()
{
    int arr[100001] = {};
    int n;
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <=n; i++) {
        if(arr[i] == i) {
            continue;
        }else if (i == arr[arr[i]]) {
            continue;
        }else {
            printf("not ambiguous");
            return 0;
        }
    }
    printf("ambiguous");
}

