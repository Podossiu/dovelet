#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a,b;
        int left = 0, right = 0;
        scanf("%d %d", &a, &b);
        while(a != 1 && b != 1) {
            if(a > b) {
                left += a / b;
                a = a % b;
            }else{
                right += b / a;
                b = b % a;
            }
        }
        a == 1 ? (right += b-1) : (left += a-1);
        printf("Scenario #%d:\n%d %d\n\n", i+1, left, right);
    }
}
