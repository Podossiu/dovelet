#include <stdio.h>

int main()
{
    int i;
    int n;
    int max = 0;
    int min = 100;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if( max < a){
            max = a;
        }
        if( min > a) {
            min = a;
        }
    }
    printf("%d", (max - min)*2 );
}
