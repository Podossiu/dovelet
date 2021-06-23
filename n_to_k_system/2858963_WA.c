#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char buffer[1000];
    scanf("%s", buffer);
    long long int n,k;
    scanf("%lld %lld", &n, &k);
    long long int dec = 0;
    int i;
    long long int digit = 1;
    int len = strlen(buffer);
    for (i = len - 1; i >= 0; i--) {
        if(buffer[i] >= '0' && buffer[i] <= '9') {
            dec += (buffer[i] - '0') * digit;
        }else {
            dec += (buffer[i] - 'A' + 10) * digit;
        }
        digit *= n;
    }
    i = 0;
    while(dec){
        int temp = dec % k;
        if(temp > 9) {
            buffer[i] = temp - 10 + 'A';
        }else{
            buffer[i] = temp + '0';
        }
        dec /= k;
        i++;
    }
    buffer[i] = '\0';
    len = strlen(buffer);
    for (i = len-1; i >=0; i--) {
        printf("%c",buffer[i]);
    }
}

