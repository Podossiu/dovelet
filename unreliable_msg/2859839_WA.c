#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void r_A(char *arr)
{
    int len = strlen(arr);
    int i;
    for (i = 0; i < len/2; i++) {
        char temp = arr[i];
        arr[i] = arr[len - i -1];
        arr[len - i-1] = temp;
    }
}
void r_M(char *arr){
    int len = strlen(arr);
    int i;
    for (i = 0; i < len; i++) {
        if(arr[i] >= '0' && arr[i] < '9') {
            arr[i] = (arr[i] + 1) ;
        }else if (arr[i] == '9') {
            arr[i] = '0';
        }
    }
}
void r_P(char *arr){
    int len = strlen(arr);
    int i;
    for (i = 0; i < len; i++) {
        if(arr[i] > '0' && arr[i] <= '9') {
            arr[i] = (arr[i] - 1) ;
        }else if (arr[i] == '0') {
            arr[i] = '9';
        }
    }
}
void r_E(char *arr){
    int len = strlen(arr);
    int i, j;
    j = (len % 2 == 0 ? len/2 : len/2 + 1);
    for (i = 0; i < len/2; i++) {
        char temp = arr[i];
        arr[i] = arr[j++];
        arr[j] = temp;
    }
}
void r_C(char *arr){
    int len = strlen(arr);
    int i;
    char temp = arr[0];
    for (i = 1; i < len; i++) {
        arr[i-1] = arr[i];
    }
    arr[len - 1] = temp;
}
void r_J(char *arr){
    int len = strlen(arr);
    int i;
    char temp = arr[len - 1];
    for (i = len - 1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}
int main()
{
    char buffer_1[7];
    char buffer_2[30];
    int i;
    scanf("%s %s", buffer_1, buffer_2);

    int len_1 = strlen(buffer_1);
    for (i = len_1-1; i >= 0;i--) {
        switch(buffer_1[i]){
            case 'J': r_J(buffer_2);  break;
            case 'C': r_C(buffer_2); break;
            case 'E': r_E(buffer_2); break;
            case 'A': r_A(buffer_2); break;
            case 'P': r_P(buffer_2); break;
            case 'M': r_M(buffer_2); break;
            default : printf("error\n"); return 0; break;
        }
    }
    printf("%s", buffer_2);
}
