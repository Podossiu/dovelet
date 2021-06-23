#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,sum = 0;
    for (i = 0; i < 5; i++) {
        int a;
        scanf("%d", &a);
        sum += (1 << (a+1000)%5);
    }
    printf(sum - 31 ? "no" :"yes");
}
