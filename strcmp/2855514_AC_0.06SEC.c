#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int min(int a, int b){
    return (a < b ? a : b);
}
int strcmp_t(const char *s1, const char *s2)
{
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    int len = min(len_s1, len_s2);
    int i;
    for (i = 0; i < len+1; i++) {
        if(s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return 0;
}
int main()
{
    char buffer_1[501], buffer_2[501];
    scanf("%s %s", buffer_1,buffer_2);
    printf("%d", strcmp_t(buffer_1, buffer_2));
}
