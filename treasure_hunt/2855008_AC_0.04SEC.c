#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int n,i;
    scanf("%d", &n);
    for(i =0; i<n; i++) {
        int temp;
        char buffer;
        scanf("%d %c", &temp, &buffer);
        switch(buffer){
            case 'N' : b -= temp; break;
            case 'S' : b += temp; break;
            case 'E' : a -= temp; break;
            case 'W' : a += temp; break;
        }
    }
    if(a == 0 && b == 0) {
        printf("Treasure Found");
    }else {
        printf("Bad Map");
    }
}
