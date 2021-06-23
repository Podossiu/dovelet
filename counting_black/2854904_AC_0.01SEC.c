#include <stdio.h>
#include <string.h>
int main()
{
    int arr[101][101] = {};
    int i,j,k;
    int n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char s[10];
        int x,y,l;
        scanf("%s %d %d %d",s ,&x, &y, &l);
        if(!strcmp(s,"BLACK")){
            for (j = x; j < x+l; j++) {
                for (k = y; k < y+l; k++) {
                    arr[j][k] = 1;
                }
            }
        }else if(!strcmp(s,"WHITE")){
            for (j = x; j < x+l; j++) {
                for (k = y; k < y+l; k++) {
                    arr[j][k] = 0;
                }
            }
        }else {
            int count = 0;
            for (j = x; j < x+l; j++) {
                for (k = y; k < y+l; k++) {
                    count += arr[j][k];
                }
            }
            printf("%d\n", count);
        }
    }
}
