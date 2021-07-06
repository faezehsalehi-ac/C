#include<stdio.h>
void input(double[],double[]);
double power(double,int);
double square_root(double);
double dimension(double[]);
int main( ){
	double x[3],y[3],p;
	int d1,d2,d3;
	input(x,y);
    d1=square_root(power(x[1]-x[0],2)+
	      power(y[1]-y[0],2));
	d2=square_root(power(x[2]-x[1],2)+
	      power(y[2]-y[1],2));
	d3=square_root(power(x[2]-x[0],2)+
	       power(y[2]-y[0],2));
    p=d1+d2+d3;
    printf("%lf\n",p);
    return 0;
}
void input(double x[],double y[]){
	int i,j;
	for (i=0;i<3;i++){
		printf("enter x[%d]=",i);
		scanf("%lf",& x[i]);
	}
	for (j=0;j<3;j++){
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