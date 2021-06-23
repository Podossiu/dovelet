#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    int i;
    int count = 0;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        int temp = i;
        while(temp != 0) {
            if(temp % 10 == k){
                count++;
            }
            temp /= 10;
        }
    }
    printf("%d", count);
}
