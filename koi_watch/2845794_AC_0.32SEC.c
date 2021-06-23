#include<stdio.h>
int main()
{
    int h,m,s,cook;
    scanf("%d %d %d", &h, &m, &s);
    scanf("%d", &cook);
    s += cook % 60;
    h += cook/3600;
    m += (cook%3600)/60;
    if(s >= 60) {
        m += s/60;
        s %= 60;
    }
    if(m >= 60) {
        h += m/60;
        m %= 60;
    }
    if(h >= 24) {
        h %= 24;
    }
    printf("%d %d %d", h, m, s);
}
