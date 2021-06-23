#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    int temp = n;
    for (i = 1; temp - i > 0; i++) {
        temp -= i;
    }
    printf("%d IS %d/%d", n, i % 2 == 0 ? temp : i+1-temp, i % 2 == 0? i+1-temp : temp);
}

