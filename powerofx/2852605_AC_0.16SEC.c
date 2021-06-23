#include<stdio.h>
int pow_re(int, int);
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    printf("%d", pow_re(x,y));
}
int pow_re(int x, int y)
{
    if(y == 1) {
        return x;
    }
    return x * pow_re(x, y-1);
}
