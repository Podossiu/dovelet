#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int isself_num(int);
int main()
{
    int i;
    for (i = 1; i<= 10000; i++) {
        if(isself_num(i)) {
            printf("%d\n",i);
        }
    }
}
int isself_num(int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        int temp = i;
        int sum = i;
        while(temp) {
            sum += temp% 10;
            temp /= 10;
        }
        if(sum == n) {
            return 0;
        }
    }
    return 1;
}
