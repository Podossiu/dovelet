#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[11];
    int i, sum = 0;
    int check;
    scanf("%s", buffer);
    for (i = 0; i < 10;i ++) {
        switch(buffer[i]){
            case '?' : check = 10- i; break;
            case 'X' : sum += 10; break;
            default : sum += (buffer[i] - '0') * (10-i); break;
        }
    }
    sum %= 11;
    for (i = 0; i <= 9; i++) {
        int temp = sum;
        if((temp + check * i)% 11 == 0) {
            printf("%d",i);
            return 0;
        }
    }
    if(check == 1) {
        if((sum + 10)% 11 == 0) {
            printf("X");
        }
    }
    printf("-1");
}
