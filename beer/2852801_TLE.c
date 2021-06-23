#include<stdio.h>
int cube_area(int a,int b,int c){
    return (a*c+a*b+b*c)*2;
}
int main()
{
    int min = 100000000;
    int n;
    int i,j,k;
    int min_s[3] = {};
    scanf("%d", &n);
    for (i = 1; i<= n; i++) {
        for (j = i; i*j <= n; j++) {
            if(i * j * (n/(i*j)) == n) {
                int cube_area_1 = cube_area(i,j,n/(i*j));
                if(cube_area_1 < min) {
                    min_s[0] = i;
                    min_s[1] = j;
                    min_s[2] = n/(i*j);
                    min = cube_area_1;
                }
            }
        }
    }
    printf("%d %d %d", min_s[0],min_s[1],min_s[2]);
}
