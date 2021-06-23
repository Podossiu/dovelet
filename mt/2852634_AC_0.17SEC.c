#include<stdio.h>
void mt(int, int, int);
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    mt(n, 1, 0);
}
void mt(int x, int y, int flag)
{
    if (flag == 0) {
        printf("%d", y);
        if(x == y+1) {
            flag = 1;
        }
        mt(x,y+1,flag);
    }else{
        printf("%d", y);
        if( y == 1) {
            return ;
        }
        mt(x,y-1,flag);
    }
}
