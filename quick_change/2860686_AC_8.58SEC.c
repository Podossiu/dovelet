#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int cents,i = 0;
    int arr[4] = {};
    int penny[4] = {25,10,5,1};
    scanf("%d", &cents);
    for (i = 0; i < 4; i++) {
        while(cents-penny[i] >= 0) {
            cents -= penny[i];
            arr[i]++;
        }
    }
    printf("%d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S) ", arr[0], arr[1], arr[2], arr[3]);
}
