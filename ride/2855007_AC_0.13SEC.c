#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char buffer_1[10];
    char buffer_2[10];
    int mul1 = 1, mul2 = 1;
    int i;
    scanf("%s %s", buffer_1, buffer_2);
    i = 0;
    while(buffer_1[i]) {
        mul1 *= (buffer_1[i] -'A'+1);
        i++;
    }
    i = 0;
    while(buffer_2[i]) {
        mul2 *= (buffer_2[i] - 'A'+1);
        i++;
    }
    if( mul1 %47 == mul2 %47){
        printf("GO");
    }else{
        printf("STAY");
    }
}
