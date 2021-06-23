#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int arr[11] = {0,};
    int i;
    int error = 0;
    int check = 0;
    while(1) {
        int temp;
        char str[11];
        scanf("%d", &temp);
        fgets(str,11,stdin);
        if(!strcmp(str,"too high\n")){
            if(arr[temp] != 100 && arr[temp] != 0) {
                error = 1;
            }
            arr[temp] = 100;
        }else if (!strcmp(str,"too low\n")) {
            if(arr[temp] != -1 && arr[temp] != 0) {
                error = 1;
            }
            arr[temp] = -1;
        }else if(!strcmp(str,"right on\n")) {
            if(arr[temp] != 0) {
                error = 1;
            }
            arr[temp] = 2;
            break;
        }
    }
    if(error == 1) {
        printf("Stan is dishonest");
        return 0;
    }
    for (i = 0; i < 11; i++) {
        if((check == 1 && arr[i] == -1) || (check == 0 && arr[i] == 100)){
            printf("Stan is dishonest");
            return 0;
        }
        if(arr[i] == 2) {
            check = 1;
        }
    }
    printf("Stan may be honest");
}

