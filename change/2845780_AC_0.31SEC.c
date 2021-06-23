#include<stdio.h>
int main(m)
{
    scanf("%d", &m);
    m = 1000 - m;
    printf("%d %d %d", m/100, (m%100)/50, ((m%100) - ((m%100)/50*50))/10);
}
