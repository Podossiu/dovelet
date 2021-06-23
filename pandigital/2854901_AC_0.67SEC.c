#include <stdio.h>
#include <string.h>
int main()
{
    char s[11];
    int a[11] = {};
    int len,i;
    scanf("%s", s);
    len = strlen(s);
    for (i = 0; i < len; i++) {
        if(s[i] - '0' > len || a[s[i] -'0'] != 0 || s[i] == '0'){
            printf("no");
            return 0;
        }
        a[s[i] -'0'] = 1;
    }
    printf("yes");
}
