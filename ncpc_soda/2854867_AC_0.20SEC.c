#include <stdio.h>

int main()
{
    int e,f,c;
    scanf("%d %d %d", &e, &f, &c);
    int sum = e+f;
    int count = 0;
    while(sum >= c) {
        count += sum/c;
        sum = (sum % c) + (sum/c);
    }
    printf("%d", count);
}
