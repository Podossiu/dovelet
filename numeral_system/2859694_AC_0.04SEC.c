#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n, i,j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char buffer_1[10],buffer_2[10], buffer_3[10];
        int len_1, len_2, dec_1= 0, dec_2=0;
        int temp =1, j, sum,k;
        scanf("%s %s", buffer_1, buffer_2);
        len_1 = strlen(buffer_1);
        len_2 = strlen(buffer_2);
        for (j = 0; j < len_1; j++) {
            if(buffer_1[j] > '0' && buffer_1[j] <= '9'){
                    temp = buffer_1[j] - '0';
                    continue;
            }
            switch(buffer_1[j]){
                case 'm': dec_1 += 1000*temp; break;
                case 'c': dec_1 += 100*temp; break;
                case 'x': dec_1 += 10*temp; break;
                default : dec_1 += temp; break;
            }
            temp = 1;
        }
        for (j = 0; j < len_2; j++) {
            if(buffer_2[j] > '0' && buffer_2[j] <= '9'){
                    temp = buffer_2[j] - '0';
                    continue;
            }
            switch(buffer_2[j]){
                case 'm': dec_2 += 1000*temp; break;
                case 'c': dec_2 += 100*temp; break;
                case 'x': dec_2 += 10*temp; break;
                default : dec_2 += temp; break;
            }
            temp = 1;
        }
        k = 0;
        sum = dec_1 + dec_2;
        for (j = 0; sum !=0; j++) {
            temp = sum % 10;
            sum /= 10;
            if(temp == 0){
                continue;
            }
            switch(j) {
                case 0: buffer_3[k++] = 'i'; break;
                case 1: buffer_3[k++] = 'x'; break;
                case 2: buffer_3[k++] = 'c'; break;
                case 3: buffer_3[k++] = 'm'; break;
            }
            if(temp != 1) {
                buffer_3[k++] = temp + '0';
            }
        }
        buffer_3[k] = '\0';
        int len_3 = strlen(buffer_3);
        for (j = len_3-1; j >= 0; j--) {
            printf("%c",buffer_3[j]);
        }
        printf("\n");
    }
}
