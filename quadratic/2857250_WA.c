#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if( b * b - 4 * a* c > 0) {
        printf("2\n");
        float sq = sqrt(b*b-4*a*c);
        b = -b;
        printf("%.3lf %.3lf",(b-sq)/(float)(2*a), (b + sq)/(float)(2*a));
    }else if (b*b - 4*a*c == 0){
        printf("1\n");
        b = -b;
        printf("%.3lf", b/(float)2*a);
    }else{
        printf("0\n");
    }
}

