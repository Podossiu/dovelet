#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if( a == 1 ) {
            float speed_inter = abs(b - c);
            if(speed_inter == 0) {
                printf("-1\n\n");
            }else{
                printf("%.2f\n\n", (b*c)/ speed_inter);
            }
        }else if ( a == 0) {
            float speed_inter = b+c;
            printf("%.2f\n\n", (b*c)/speed_inter);
        }
    }
}

