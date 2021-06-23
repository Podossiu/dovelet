#include<stdio.h>
int stack[51];
int sp = -1;
int main()
{
    int i = 0;
    char buffer[51];
    gets(buffer);
    while(buffer[i]) {
        if(buffer[i] == '('){
            sp++;
            stack[sp] = i;
           }else if (buffer[i] == ')') {
                printf("%d %d\n", stack[sp], i);
                sp --;
           }
           i++;
    }
}
