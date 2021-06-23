#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    int X1,X2,Y1,Y2;
    scanf("%d %d %d %d %d %d %d %d", &x1, &x2, &y1, &y2, &X1, &X2, &Y1,&Y2);
    if(y2 < Y1 || Y2 < y1 || x2 < X1 || X2 < x1) {
        printf("Overlap");
    }else{
        printf("No overlap");
    }
}

