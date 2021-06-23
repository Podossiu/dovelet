#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer_1[5], buffer_2[5];
    int a_cnt = 0, b_cnt = 0, i,j;
    scanf("%s %s",buffer_1, buffer_2);
    for (i = 0; i < 4; i++) {
        if(buffer_2[i] == buffer_1[i]) {
            a_cnt ++;
            continue;
        }else {
            for (j = 0; j < 4; j++) {
                if(buffer_1[i] == buffer_2[j]) {
                    b_cnt ++;
                }
            }
        }
    }
    printf("%dA%dB",a_cnt,b_cnt);
}
