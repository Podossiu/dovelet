#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float arr[4] = {12.01, 1.008, 16.00, 14.01};
    char ch;
    float sum = 0;
    float temp = 0;
    do{
        ch = getchar();
        if(ch >= '0' && ch<='9') {
            sum += temp * (ch - '0');
            temp = 0;
        }else{
            sum += temp;
            temp = (ch == 'C' ? arr[0] : (ch == 'H' ? arr[1] : (ch == 'O' ? arr[2] : arr[3])));
        }
    }while(ch != '\n');
    printf("%.3f",sum);
}
