#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i;
    scanf("%[^\n]", s);
    int len = strlen(s);
    for (i = 0; i <= len; i++){
        printf("%c", s[i]);
        if((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (i + 2)<len) {
            if(s[i+1] == 'p' && s[i+2] == s[i]){
                i+= 2;
            }
        }
    }
}

