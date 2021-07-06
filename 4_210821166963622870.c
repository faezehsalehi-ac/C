#include<stdio.h>
#include<string.h>
void printPoly(double *pl,int n){
  for(;n>=0;n--)
    if(pl[n]!=0)
      printf("%lfx^%d+",pl[n],n-1);
}
int main(){
  double pl[100];int n;
  pl[0]=-5; pl[1]=3; pl[2]=0;pl[3]=2;
  n=4;
  printPoly(pl,n);
  /*printf("%lfx^3+%lfx^2+%lfx^1+%lf\n",pl[3],pl[2],pl[1],pl[0]);
  char st1[200];
  strcpy(st1,"2x^3+3x-5");
  printf("%s",st1);*/
  return 0;
}
