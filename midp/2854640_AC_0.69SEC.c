#include<stdio.h>
#include<math.h>
int combi(int n) {
    if ( n >= 2 ) {
        return n*(n-1) / 2;
    }
    return 0;
}
int main()
{
    int n;
    int i;
    int eo = 0, ee = 0, oo = 0, oe = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        if(a % 2 == 0){
            if(b % 2 == 0) {
                ee ++;
            }else {
                eo++;
            }
        }else {
            if( b % 2 == 0) {
                oe++;
            }else {
                oo++;
            }
        }
    }
    printf("%d", combi(oo)+combi(oe)+combi(eo)+combi(ee));
}

