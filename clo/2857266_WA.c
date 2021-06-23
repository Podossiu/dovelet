#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    float t = 0;
    scanf("%d", &n);
    if (n == 12){
        printf("%.6f", t);
    }else{
        n = 30 * n;
        t = (n)/ 5.5;
        if( t < 60) {
            printf("%.6lf", t);
        }else{
            printf("CAN'T SEE!");
        }
    }
}

