#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if( a == 1 ) {
            if( c > b ) {
                printf("%0.2f\n", b*c/(float)(c-b));
            }else if (c < b) {
                printf("%0.2f\n", b*c/(float)(b-c));
            }else{
                printf("-1\n");
            }
        }else if ( a == 0) {
            printf("%0.2f\n", b*c/(float)(b+c));
        }
    }
}

