#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float arr[4] = {12.01, 1.008, 16.00, 14.01};
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
            temp_1 = (ch == 'C' ? arr[0] : (ch == 'H' ? arr[1] : (ch == 'O' ? arr[2] : arr[3])));
            temp_2 = 0;
        }else{
            sum += temp_1;
            temp_1 = (ch == 'C' ? arr[0] : (ch == 'H' ? arr[1] : (ch == 'O' ? arr[2] : arr[3])));
        }
    }while(ch != '\n');
    printf("%.3f",sum);
}
