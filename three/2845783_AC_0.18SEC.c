#include<stdio.h>
int main(a,b)
{
    scanf("%d %d", &a, &b);
    int three = a * (b % 10);
    int four = a * ((b % 100) - (b % 10))/10;
    int five = a * (b/100);
    printf("%d\n%d\n%d\n%d", three,four,five, three + four*10+five*100);
}
