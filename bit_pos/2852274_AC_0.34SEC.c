#include<stdio.h>
int main()
{
    int x;
    int i = 0;
    scanf("%d", &x);
    while(x != 0) {
        if((x>>1) * 2 != x) {
            printf("%d ", i);
        }
        i ++;
        x = x>>1;
    }
}
