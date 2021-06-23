#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float arr[200] ={};
    arr['C'] = 12.01;
    arr['H'] = 1.008;
    arr['O'] = 16.00;
    arr['N'] = 14.01;
    char ch;
    float sum = 0;
    float temp_1= 0;
    do{
        ch = getchar();
        if(ch >= '0' && ch<='9') {
            int temp_2 = ch - 48;
            do{
                ch = getchar();
                if( ch >= '0' && ch <= '9') {
                    temp_2 = temp_2 * 10 + ch-48;
                }
            }while(ch >= '0' && ch<='9');
            sum += temp_1 * temp_2;
            temp_1 = arr[ch];
        }else{
            sum += temp_1;
            temp_1 = arr[ch];
        }
    }while(ch != '\n');
    printf("%.3f",sum);
}
