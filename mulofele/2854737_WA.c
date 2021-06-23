#include<stdio.h>
#include<string.h>

int main()
{
    char s[301];
    int i;
    int sum_e = 0;
    int sum_o = 0;
    scanf("%s", s);
    int len = strlen(s);
    for (i = len - 1; i >= 0; i--) {
        if((len - i) % 2 == 0){
            sum_e += s[i] - '0';
        }else{
            sum_o += s[i] - '0';
        }
    }
    if( sum_e - sum_o % 11 == 0) {
        printf("yes");
    }else {
        printf("no");
    }
}
