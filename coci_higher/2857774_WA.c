#include<stdio.h>
#include<math.h>
#include<string.h>
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char buffer[10];
    scanf("%s", buffer);
    int len = strlen(buffer), i, j;
    for (i = len-1; i >= 0; i--){
        for (j = len-1; j > i; j--) {
            if(buffer[j] > buffer[i]) {
                swap(&buffer[j], &buffer[i]);
                printf("%s", buffer);
                return 0;
            }
        }
    }
    printf("0");
}

