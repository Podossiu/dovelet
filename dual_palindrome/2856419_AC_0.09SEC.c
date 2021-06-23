#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int palindrome(char* arr)
{
    int len = strlen(arr);
    int i;
    for (i = 0; i < len/2; i++) {
        if(arr[i] != arr[len -1 - i]) {
            return 0;
        }
    }
    return 1;
}
char* notation(int a, int k)
{
    char *b = (char *)malloc(sizeof(char) * 100);
    int i = 0;
    while(a) {
        b[i] = a % k + '0';
        a /= k;
        i++;
    }
    b[i] = '\0';
    return b;
}
int main()
{
    int n, s, i;
    int count = 0;
    scanf("%d %d", &n, &s);
    s++;
    while(1){
        if(count == n) {
            return 0;
        }
        int count_temp = 0;
        for (i = 2; i <= 10; i++) {
            count_temp += palindrome(notation(s, i));
            if( count_temp == 2) {
                count += 1;
                printf("%d\n", s);
                break;
            }
        }
        s++;
    }

}
