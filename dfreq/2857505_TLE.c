#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, a;
    int i;
    int count = 0;
    char buf[15];
    scanf("%d %d", &n, &a);
    for (i = 1; i <= n; i++) {
        sprintf(buf, "%d", i);
        int j = 0;
        while(buf[j]) {
            if(buf[j] == a + '0') {
                count++;
            }
            j++;
        }
    }
    printf("%d", count);
}
