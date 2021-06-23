#include<stdio.h>
int main()
{
    int a,b,c,d,s;
    int count_nikky = 0;
    int count_byron = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &s);
    int temp_nikky = s;
    int temp_byron = s;
    if( s > a + b ) {
        count_nikky = (a-b)*(s/(a+b));
        temp_nikky = temp_nikky % (a+b);
    }
    if( s > c +d ) {
        count_byron = (c-d)*(s/(c+d));
        temp_byron = temp_byron % (c+d);
    }
    if(temp_nikky > a) {
        count_nikky += (a -(temp_nikky - a));
    }else {
        count_nikky += temp_nikky;
    }
    if(temp_byron > c) {
        count_byron += (c - (temp_byron - d));
    }else {
        count_byron += temp_byron;
    }
    if( count_byron > count_nikky) {
        printf("Byron");
    }else if (count_byron < count_nikky) {
        printf("Nikky");
    }else{
        printf("Tied");
    }
}

