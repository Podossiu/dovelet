#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    int X1,Y1,X2,Y2;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &X1, &Y1, &X2,&Y2);
    if(y2 < Y1 || Y2 < y1 || x2 < X1 || X2 < x1) {
        printf("No overlap");
    }else{
        printf("Overlap");
    }
}

