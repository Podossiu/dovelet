#include <stdio.h>
#include <string.h>
 
int sum_num(int n){
    char str[6];
    int length, sum = 0;
    register unsigned int i;
 
    sprintf(str, "%d", n);
    length = strlen(str);
 
    for(i=0; i<length; i++)
        sum += (str[i] - 48);
 
    return n + sum;
}
             
int main(){
    register unsigned int i;
    char arr[10100]; // self_num이 10000넘어가는거 방지
 
    for(i=1; i<10000; i++)
        arr[i] = 0;
 
    for(i=1; i<10000; i++)
        arr[sum_num(i)] = 1; 
 
    for(i=1; i<10000; i++)
        if(arr[i] == 0) printf("%d\n", i);
}
