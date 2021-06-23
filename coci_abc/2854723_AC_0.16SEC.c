#include<stdio.h>
#include<string.h>
void swap(int *a, int *b)
{
    if(*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main()
{
    int a,b,c;
    char s[4];
    int i;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%s", s);
    swap(&a,&b);
    swap(&a,&c);
    swap(&b,&c);

    for (i = 0; i < 3; i++) {
        if(s[i] == 'A'){
            printf("%d ", a);
        }else if (s[i] == 'B'){
            printf("%d ", b);
        }else {
            printf("%d ",c);
        }
    }
}
