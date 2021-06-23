#include<stdio.h>
int main()
{
    int x,m;
    int i;
    int check = 0;
    scanf("%d %d", &x, &m);
    for (i = 1; i <m; i++) {
        if((x*i)%m == 1) {
            printf("%d", i);
            check = 1;
            break;
        }
    }
    if ( check != 1 ){
        printf("No such integer exists.");
    }
}
