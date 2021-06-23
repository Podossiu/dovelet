#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[13];
    int i, j = 0;
    int digit =1;
    int sum = 0;
    scanf("%s", buffer);
    for(i = 0;i < 12;i++){
        if(buffer[i] == '$'){
            for (;j < i;j++){
                sum += (buffer[j] - '0') * digit;
                digit *= 10;
            }
            j++;
            digit = 1;
            break;
        }
    }
    for(i = j;i < 12;i++){
        int temp;
        if(buffer[i] == '$'){
            for (temp = i-1;temp >= j; temp--){
                sum += (buffer[temp] - '0') * digit;
                digit *= 10;
            }
            j = i + 1;
            digit = 1;
            break;
        }
    }
    for (;j < 12;j++){
        sum += (buffer[j] - '0') * digit;
        digit *= 10;
    }
    printf("%d", sum);
}
