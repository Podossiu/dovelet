#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d ",a);
    while(b >= 0){
        printf("%d ",b);
        int temp = a-b;
        a = b;
        b = temp;
    }
}
