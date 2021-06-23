#include<stdio.h>
int main()
{
    int a,b;
    int i;
    int arr[10] = {};
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++) {
        int temp = i;
        while(temp) {
            arr[temp % 10]++;
            temp /= 10;
        }
    }
    for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
    }
}
