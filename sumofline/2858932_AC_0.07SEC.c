#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++) {
        char buffer[1000] = {};
        fgets(buffer, 1000, stdin);
        int sum = 0;
        int j = 0;
        int k = 0;
        while(buffer[j] != '\0') {
            while(buffer[k] != ' ') {
                k++;
            }
            sum += atoi(buffer+j);
            k ++;
            j = k;
        }
        printf("%d\n", sum);
    }
}

