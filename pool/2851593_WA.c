#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, y;
    int temp_x, temp_y;
    int n;
    int i;
    if (n < 2) {
         for (i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
        }
        printf("-1");
    }else if(n == 3 || n == 4) {
        for (i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
        }
        printf("1");
    }else{
        scanf("%d %d", &x, &y);
        scanf("%d %d", &temp_x, &temp_y);
        x ^= temp_x;
        y ^= temp_y;
        if (x != 0 && y != 0) {
            printf("1");
        }else {
            printf("-1");
        }
    }

}

