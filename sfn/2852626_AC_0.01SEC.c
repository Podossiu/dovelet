#include<stdio.h>
int sum(int, int);
int main()
{
    int i;
    for(i = 1000; i < 10000; i++) {
        int sum_ten = sum(i,10);
        int sum_twelve = sum(i,12);
        int sum_hexa = sum(i,16);
        if(sum_ten == sum_twelve && sum_ten == sum_hexa) {
            printf("%d\n", i);
        }
    }
}
int sum(int x, int y)
{
    if(x == 0) return 0;
    return sum(x/y, y) + x % y;
}
