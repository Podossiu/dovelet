#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b = 0,count = 0;
    for(;;){
        scanf("%d", &a);
        if( b != a && b) {
            printf("%d %d ", count, b);
            count = 0;
        }
        if(a == 0){
            break;
        }
        b = a;
        count ++;
    }
}
