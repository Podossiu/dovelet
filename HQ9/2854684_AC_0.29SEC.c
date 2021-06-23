#include<stdio.h>
#include<string.h>
int main()
{
    char a[26];
    int i;
    scanf("%s", a);
    int len = strlen(a);
    for (i = 0; i <= len; i++) {
        if(a[i] == 'q' || a[i] == 'Q') {
            printf("%s\n", a);
        }else if (a[i] == 'H' || a[i] == 'h') {
            printf("Hello, world!\n");
        }else if (a[i] == '9') {
            printf("99 Bottles of Beer on the Wall\n");
        }
    }
}

