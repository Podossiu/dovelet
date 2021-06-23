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
        degree += ((b >= a) ? (b-a) * 9 : (360 - (a-b) * 9));
        degree += ((b >= c) ? (b-c) * 9 : (360 - (c-b) * 9));
        degree += ((d >= c) ? (d-c) * 9 : (360 - (c-d) * 9));
        degree += 1080;
        printf("%d\n", degree);
    }
}
