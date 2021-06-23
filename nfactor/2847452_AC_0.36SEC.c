#include<stdio.h>

int main(a)
{
    int i = 1;
    int total =0;
    scanf("%d", &a);
    for (i = 1; i* i<= a; i++) {
        if (a % i == 0) total +=2;
        if (i*i == a) total --;
    }
    printf("%d", total);
}
