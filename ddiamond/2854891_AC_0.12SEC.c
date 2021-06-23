#include <stdio.h>
int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n/2+1 ;i++){
        for (j = 0; j < n/2-i; j++) {
            printf(" ");
        }
        for (j = 0; j < i+1; j++) {
            printf("%d", j+1);
        }
        for (j = i; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = 0; i < n/2; i++) {
        for (j = i+1; j > 0; j--) {
            printf(" ");
        }
        for (j = 0; j < n/2-i; j++) {
            printf("%d", j+1);
        }
        for (j = n/2-i-1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
