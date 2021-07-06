#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct dumPoly{
  double *p;
  int n;
} poly;
void printPoly(poly);
poly inputPoly(void);
int main(){poly p1,p2;
  /*double pl1[100],pl2[100];int n1,n2;
  pl1[0]=-5; pl1[1]=3; pl1[2]=0;pl1[3]=2;
  pl2[0]=3;pl2[1]=0;pl2[2]=0;pl2[3]=5;
  n1=n2=4;*/
  p1=inputPoly();
  p2=inputPoly();
  printPoly(p1);
  printPoly(p2);
  /*printf("%lfx^3+%lfx^2+%lfx^1+%lf\n",pl[3],pl[2],pl[1],pl[0]);
  char st1[200];
  strcpy(st1,"2x^3+3x-5");
  printf("%s",st1);*/
  return 0;
}
poly inputPoly(void){poly p;
  int i;
  printf("Enter number of terms: ");
  scanf("%d",&p.n);
  if(p.n>0){p.p=(double*)malloc(p.n*sizeof(double));
    for(i=0;i<p.n;i++){
      printf("Enter pl[%d]=",i);
      scanf("%lf",p.p+i);
      /*scanf("%lf",&pl[i]);*/
    }
  }
  else p.n=0;
  return p;
}
void printPoly(poly p){
  for(;p.n>0;p.n--)
    if(p.p[p.n]!=0)
      printf("%lfx^%d+",p.p[p.n],p.n-1);
  printf("%lf\n",p.p[0]);
}
