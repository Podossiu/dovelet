#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x = 0, y = 0;
    int temp_x, temp_y;
    int i;
    for (i = 0; i < 3;i ++) {
        scanf("%d %d", &temp_x, &temp_y);
        x ^= temp_x;
        y ^= temp_y;
    }
    printf("%d %d", x, y);
}

