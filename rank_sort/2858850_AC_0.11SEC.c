#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct peo{
    int tot;
    int rank;
}peo;
int main()
{
    int n, i,j;
    peo arr[1000];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i].tot);
        arr[i].rank = 1;
    }
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if(arr[i].tot < arr[j].tot) {
                arr[i].rank++;
            }else if(arr[i].tot > arr[j].tot){
                arr[j].rank++;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\n",arr[i].rank);
    }

}

