#include<stdio.h>
void swap(int *a, int *b)
{
    if(*a > *b){
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}
int main()
{
    int x1, x2;
    int y1, y2;
    int i;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);
    swap(&x1,&x2);
    swap(&y1,&y2);
    if(y1 < x1 && ((y2 > x1) && (y2<x2))) {
        printf("cross");
    }else if (y2 > x2 && ((y1 > x1) && (y1 < x2))){
        printf("cross");
    }else{
        printf("not cross");
    }
}
