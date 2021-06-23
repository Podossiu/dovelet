#include<stdio.h>
int main()
{
   int counter=0;
   int i,n;

   scanf("%d",&n);

   for(i = n-1 ; i >= 1 ; i--){
      counter++;
      if ( n % i == 0 ) break;
   }

   printf("%d\n",counter);
}

