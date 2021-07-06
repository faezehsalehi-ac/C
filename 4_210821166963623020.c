

#include<stdio.h>
int main(){
   int a[100][100];
   int i,j,n;
   printf("Enter 0< n <100 ");
   scanf("%d", & n);
   for(i=0 ; i<n ; i++){
      for(j=0; j <n ; j ++){
         printf("Enter a[%d][%d] ",i,j);
         scanf("%d",& a[i][j]);
      }
      printf("\n");
   }
   for(i=0; i<n ; i++ ){
      for(j=0 ; j<n ; j++ )
         printf("%d\t",a[i][j]);
      printf(" %%  \\ \n");
   }
   return 0;
}
