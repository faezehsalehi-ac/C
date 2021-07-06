#include<stdio.h>
int main(){
   int a[3][3];
   int i,j,sum,sumAll;
   i=0;
   sum = 0;
   sumAll=0
   while(i<3){
      j=0;
      while(j<3){
         printf("Enter a[i][j] ");
         scanf("%d", &a[i][j]);
         sum = sum + a[i][j]);
         j= j + 1;
      }
      printf("sum %d ",i);
      printf("%d\n",sum);
      sumAll = sumAll + sum ;
      i= i+1;
   }
   printf("sum all = \n",sumAll);
   return 0;
}
