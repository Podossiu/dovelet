#include<stdio.h>
int main()
{
    int max = 0;
    int d, m;
    int i;
    int min = 40000;
    scanf("%d %d", &d, &m);
    for (i = 0; i < d; i++) {
        int temp;
        scanf("%d", &temp);
        if( temp < min ) {
           min = temp;
        }else {
            if(max < ((m/min)*(temp - min))){
                max = (m/min)*(temp - min);
            }
        }
    }
    printf("%d", max);
}

