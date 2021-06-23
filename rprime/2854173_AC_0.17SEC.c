#include<stdio.h>
int main()
{
    int a,b;
    int i;
    scanf("%d %d", &a, &b);
    int min = a < b ? a : b;
    for (i = 2; i <= min; i++){
        if(a % i == 0 && b % i == 0) {
            printf("no");
            return 0;
        }
    }
    printf("yes");
}

