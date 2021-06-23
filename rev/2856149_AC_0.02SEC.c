#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rev(int a)
{
    int r = 0;
    while(a) {
        r = r * 10 + a % 10;
        a /= 10;
    }
    return r ;
    
}
int main()
{
    int i;
    for ( i = 10; i <= 100000; i++) {
        int temp = i + rev(i);
        if(temp == rev(temp)) {
            printf("%d\n", i);
        }
    }
}
