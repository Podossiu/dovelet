#include<stdio.h>
int stack_1[51];
int stack_2[51];
int sp_1 = -1;
int sp_2 = -1;
int main()
{
    int i = 0;
    int count = 0;
    char buffer[51];
    gets(buffer);
    while(buffer[i]) {
        if(buffer[i] == '('){
            stack_1[++sp_1] = i;
           }else if (buffer[i] == ')') {
                stack_2[++sp_2] = i;
           }
           i++;
    }
    if(sp_1 != sp_2){
        printf("not match");
    }else
        i = 0;
        while(sp_1>-1){
        printf("%d %d\n", stack_1[sp_1--], stack_2[i++]);
        }
}
