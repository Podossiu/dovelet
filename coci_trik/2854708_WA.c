#include<stdio.h>
#include<string.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char s[101];
    int i;
    int arr[3] = {1,0,0};
    scanf("%s", s);
    int len = strlen(s);
    for ( i =0; i < len; i++) {
        if(s[i] == 'A'){
            swap(&arr[0], &arr[1]);
        }else if (s[i] == 'B') {
            swap(&arr[1], &arr[2]);
        }else {
            swap(&arr[2], &arr[1]);
        }
    }
    for ( i = 0; i< 3; i++) {
        if(arr[i] == 1) {
            printf("%d", i+1);
            return 0;
        }
    }
}

