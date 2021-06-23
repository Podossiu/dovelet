#include <stdio.h>
int main()
{
    int mn,budget, hn, w;
    int i,j;
    int min = 1000000;
    scanf("%d %d %d %d", &mn, &budget, &hn, &w);
    for (i = 0; i < hn; i++){
        int fee;
        scanf("%d", &fee);
        for (j = 0; j < w; j++) {
            int people;
            scanf("%d", &people);
            if(people >= mn) {
                int temp = mn * fee;
                if( temp < budget && temp < min) {
                    min = temp;
                }
            }
        }
    }
    if(min == 1000000){
        printf("stay home");
    }else{
        printf("%d", min);
    }

}
