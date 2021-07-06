#include<stdio.h>
double square_root(double);
double input(void);
int main(){
  double x;
  x=input();
  printf("square_root(%lf)=%lf\n",x,square_root(x));
  return 0;
}
double input(void){
  double x=-1;
  while(x<=1){
    printf("Enter a number>1: ");
    scanf("%lf",&x);
  }
  return x;
}
double square_root(double x){
  double sq=0,step;
  for(step=0.01;x-sq*sq>0.1;sq+=step)
    ;
  return sq;
}
