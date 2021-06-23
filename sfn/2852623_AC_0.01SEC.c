#include<stdio.h>
int sum_t(int);
int sum_h(int);
int sum_tw(int);
int main()
{
    int i;
    for(i = 1000; i < 10000; i++) {
        int sum_ten = sum_t(i);
        int sum_twelve = sum_tw(i);
        int sum_hexa = sum_h(i);
        if(sum_ten == sum_twelve && sum_ten == sum_hexa) {
            printf("%d\n", i);
        }
    }

}
int sum_t(int n)
{
    int count = n % 10;
    if( n == 0 ) {
        return count;
    }
    count += sum_t(n/10);
    return count;
}
int sum_h(int n)
{
    int count = n % 16;
    if (n == 0) {
        return count;
    }
    count += sum_h(n/16);
    return count;
}
int sum_tw(int n)
{
    int count = n % 12;
    if (n == 0) {
        return count;
    }
    count += sum_tw(n/12);
    return count;
}

