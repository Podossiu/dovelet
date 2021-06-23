#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    double t = 0;
    scanf("%d", &n);
    if (n == 12){
        printf("%.6lf", t);
    }else{
        n = 30 * n;
        t = (n)/ 5.5;
        t = round(t * 1000000)/1000000;
        if( t < 60) {
            printf("%.6f", t);
        }else{
            printf("CAN'T SEE!");
        }
    }
}

