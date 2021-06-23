#include<stdio.h>
int main()
{
    int a,b = 1;
    int count = 0;
    scanf("%d", &a);
    if( a % 2 == 0 || a % 5 == 0){
        printf("0");
    }
    while(!(b == 1 && count != 0)) {
        b *= 10;
        b %= a;
        count ++;
    }
    printf("%d", count);
}
