#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[1000] = {};
    int i = 0;
    int mok = 0;
    int n, l = 1;
    scanf("%d", &n);
    arr[0] = 2;
    int j = 0;
    for (i = 1; i < n; i++) {
        for (j = 0; j < l; j++) {
            arr[j] = arr[j] * 2 + mok;
            mok = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        for (; mok != 0; ++j) {
            arr[j] = mok % 10;
            mok /= 10;
        }
        l = j;
    }
    for (i = l-1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
}
