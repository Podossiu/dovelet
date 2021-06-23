#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    while(1){
        int a,b,c,d;
        int degree = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(a == 0 && b == 0 && c == 0 && d == 0){
            break;
        }
        degree += ((b > a) ? (360 - (b-a) * 9) : (a-b) * 9);
        degree += ((b > c) ? (360 - (b-c) * 9) : (c-b) * 9);
        degree += ((d > c) ? (360 - (d-c) * 9) : (c-d) * 9);
        degree += 1080;
        printf("%d\n", degree);
    }
}
