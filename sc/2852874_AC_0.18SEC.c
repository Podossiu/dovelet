#include<stdio.h>
int main()
{
    int a;
    int arr[5] = {};
    int i;
    int count = 0;
    while(1){
        scanf("%d", &a);
        if( a== -1) {
            break;
        }
        a /= 10;
        switch(a){
            case 10:
            case 9 : arr[0]++;break;
            case 8 : arr[1]++;break;
            case 7 : arr[2]++;break;
            case 6 : arr[3]++;break;
            default : arr[4] ++;
        }
        count++;
    }
    printf("%d\n", count);
    for (i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }

}
