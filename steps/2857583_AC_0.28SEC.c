#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x,y;
    scanf("%d %d", &x, &y);
    if( x == y ){
        x%2 == 0 ? printf("%d", 2*x) : printf("%d", 2*x-1);
    }else if (x - y == 2) {
        x%2 == 0 ? printf("%d", 2*x - 2) : printf("%d", 2*x - 3);
    }else {
        printf("No Number\n");
    }


}
