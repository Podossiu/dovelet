#include<stdio.h>
int main()
{
    int a,b = 1;
    int count = 0;
    scanf("%d", &a);
    while(!(b == 1 && count != 0)) {
        b *= 10;
        b %= a;
        count ++;
    }
    printf("%d", count);
}
