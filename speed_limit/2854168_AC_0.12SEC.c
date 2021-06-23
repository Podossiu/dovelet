#include<stdio.h>
int main()
{
    int n;
    int i;
    int before = 0;
    int count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int s,t;
        scanf("%d %d", &s, &t);
        count += s*(t-before);
        before = t;
    }
    printf("%d miles", count);
}

