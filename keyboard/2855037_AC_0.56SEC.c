#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    int s,e;
    int arr[1001] = {};
    int max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %*c %d %d",&s,&e);
        if(max < e){
            max = e;
        }
        for ( j = s; j < e; j++) {
            arr[j]++;
        }
    }
    for (i = 0; i <= max; i++) {
        if(arr[i] != 0) {
            printf("%c", arr[i] + 'A'-1);
        }
    }
}
