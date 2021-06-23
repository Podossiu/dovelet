#include<stdio.h>
int euclid(int, int);
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d %d", euclid(a,b), a/euclid(a,b)* b);
}
int euclid(int a, int b){
    if( b == 0) {
        return a;
    }
    return euclid(b, a%b);
}
