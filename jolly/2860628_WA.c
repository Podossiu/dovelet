#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,n, i;
    int arr[3001] = {};
    scanf("%d %d", &n, &a);
    for (i = 1; i < n; i++) {
        scanf("%d", &b);
        int m = abs(b-a);
        if(arr[m] != 0) {
            printf("Not jolly");
            return 0;
        }
        arr[m]++;
        a = b;
    }
    printf("Jolly");
}
