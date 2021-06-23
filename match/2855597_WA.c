#include<stdio.h>
int stack[51];
int sp = -1;
int main()
{
    int i = 0;
    int count = 0;
    char buffer[51];
    gets(buffer);
    while(buffer[i]) {
        if(buffer[i] == '('){
            sp++;
            stack[sp] = i;
           }else if (buffer[i] == ')' && sp != -1) {
                count++;
                printf("%d %d\n", stack[sp], i);
                sp --;
           }
           i++;
    }
    if(count == 0) {
        printf("not match");
    }
}
