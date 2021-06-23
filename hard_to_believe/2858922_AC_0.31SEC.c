#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(char *b)
{
    int len = strlen(b);
    int i;
    for ( i = 0 ; i < len/2; i++) {
        char temp = b[i];
        b[i] = b[len-i-1];
        b[len-i - 1] = temp;
    }
}
int main()
{
    char buffer_1[7], buffer_2[7], buffer_3[7];
    scanf("%[0-9]+%[0-9]=%[0-9]", buffer_1,buffer_2,buffer_3);
    rev(buffer_1);
    rev(buffer_2);
    rev(buffer_3);
    if(atoi(buffer_3) == atoi(buffer_1) + atoi(buffer_2)) {
        printf("True");
    }else{
        printf("False");
    }

}

