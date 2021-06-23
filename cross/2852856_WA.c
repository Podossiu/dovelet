#include<stdio.h>
int main()
{
    int x1, x2;
    int y1, y2;
    int i;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    if( x1 > x2 ){
        x1 ^= x2;
        x2 ^= x1;
        x1 ^= x2;
    }
    if( ((x1 < y1) && (x2 > y1)) || ((x1 < y2) && (x2 > y2))){
        printf("cross");
    }else{
        printf("not cross");
    }
}
