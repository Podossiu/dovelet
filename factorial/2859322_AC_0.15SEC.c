#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int arr[10000] = {1,};
    int i,j,last = 1,n,mok;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        mok = 0;
        for (j = 0; j < last; j++) {
            arr[j] = arr[j] * i + mok;
            mok = arr[j]/10;
            arr[j] = arr[j] % 10;
        }
        for (; mok != 0; last++) {
                arr[last] = mok % 10;
                mok /= 10;
            }
    }
    for (i = last-1; i >=0; i--) {
        printf("%d", arr[i]);
    }

}
