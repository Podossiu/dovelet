#include<stdio.h>
int main()
{
    int sum = 0;
    int i;
    int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char day_name[][10] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int year, month, day;
    scanf("%d %d %d", &year, &month, &day);
    for (i = 1900; i < year; i++) {
        if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            sum += 366;
        }else {
            sum += 365;
        }
    }
    for (i = 0; i < month-1; i++) {
        sum += month_day[i];
    }
    sum += day - 1;
    if(( year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month > 2){
        sum++;
    }
    printf("%s", day_name[sum%7]);
}
