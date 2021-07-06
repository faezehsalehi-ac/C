#include<stdio.h>
int main(){
   int a[100][100];
   int i,j,sum=0,n;
   printf("Enter 0< n <100 ");
   scanf("%d", & n);
   for(i=0 ; i<n ; i++){
      for(j=0; j <n ; j ++){
         printf("Enter a[%d][%d] ",i,j);
         scanf("%d",& a[i][j]);
         if(i == j)
           sum = sum + a[i][i] ;
      }
      printf("\n");
   }
   /*for(i=0; i<n ; i++ ){
      sum = sum + a[i][i];
   }*/
   printf("sum = %d \n",sum);
   return 0;
}
