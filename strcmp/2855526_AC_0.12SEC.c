#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strcmp_t(const char *s1, const char *s2)
{
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0') {
        if(s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}
int main()
{
    char buffer_1[501], buffer_2[501];
    scanf("%s %s", buffer_1,buffer_2);
    printf("%d", strcmp_t(buffer_1, buffer_2));
}
