/*
 * Example to illustrate pointers/arrays magic  in C
 */
#include <stdio.h>
#include <stdlib.h>
//#define SIZE 20
void printMat(int **Y , int n){
int i,j;
   for (i=0; i<n; i++)
   {     
      for (j=0; j<=i; j++) {
         printf("%d ",Y[i][j]);
      }
      printf("\n");
   }  
}
int main()
{
   int n=10;
   int i,j;
   int **Y;
      Y = (int **) malloc(sizeof(int *)*n);
   for (i=0; i<n; i++)
      Y[i] = (int *) malloc(sizeof(int)*(i+1));
   for (i=0; i<n; i++)
      for (j=0; j<=i; j++)
         Y[i][j] = (i)*(i+1)/2 + j + 1;
   for (i=0; i<n; i++)
   {     
      for (j=0; j<=i; j++) {
         printf("%d ",Y[i][j]);
      }
      printf("\n");
   }
   printMat(Y,n);
   for (i=0; i<n; i++)
         free(Y[i]);
   free(Y);
   return 0;
}
