#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100001];
    char t[100001];
    while(scanf("%s %s", s, t) != EOF) {
        int len_s = strlen(s);
        int len_t = strlen(t);
        if(len_s > len_t) {
            printf("No\n");
            continue;
        }
        int i = 0;
        int j = 0;
        for(j = 0; j < len_t; j++) {
            if(t[j] == s[i]) {
                i++;
            }
            if( i == len_s ){
                printf("Yes\n");
                break;
            }
        }
        if( i != len_s ){
            printf("No\n");
        }
    }
}
