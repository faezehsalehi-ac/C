#include<stdio.h>
void input(double[],double[]);
double power(double,int);
double square_root(double);
int main( ){
	double x[4],y[4],d1,d2,d3,d4,d5,d6,p,s;
	input(x,y);
    d1=square_root(power(x[1]-x[0],2)+
	      power(y[1]-y[0],2));
	d2=square_root(power(x[2]-x[1],2)+
	      power(y[2]-y[1],2));
	d3=square_root(power(x[3]-x[2],2)+
	       power(y[3]-y[2],2));
	d4=square_root(power(x[3]-x[0],2)+
	       power(y[3]-y[0],2));
	d5=square_root(power(x[2]-x[0],2)+
	       power(y[2]-y[0],2));
	 d6=square_root(power(x[3]-x[1],2)+
	       power(y[3]-y[1],2));
      if (d1==d2){
         d1*d1+d3*d3==d2*d2+d4*d4;
      }
      else{
      	d1*d1+d4*d4==d2*d2+d3*d3;
      }
	  p=d1+d2+d3+d4;
	  printf("%lf\n",p);
	  s=d1*d2;
	  printf("%lf\n",s);
      return 0;
}
void input(double x[],double y[]){
	int i,j;
	for (i=0;i<4;i++){
		printf("enter x[%d]=",i);
		scanf("%lf",& x[i]);
	}
	for (j=0;j<4;j++){
		printf("enter y[%d]=",j);
		scanf("%lf",& y[j]);
	}
}
double power(double num,int pow){
	double p=1;
	while(pow>0){
		p=p*num;
		pow=pow-1;
	}
	return p;
}
double square_root(double number){
	double k=1;
	int i=1;
	while(i<=10){
		k=(k+(number/k))/2;
		i++;
	}
	return k;
}