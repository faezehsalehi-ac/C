#include<stdio.h>
double power(double,int);
double square_root(double);
void input1(double [ ]);
void input2(double [ ]);
int main( ){
	double d,x[2],y[2];
	 input1(x);
	 input2(y);
    d=square_root(power(x[1]-x[0],2)+power(y[1]-y[0],2));
    printf("%lf\n",d);
    return 0;
}
double power(double num, int pow){
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
void input1(double x[]){
	int i;
	for (i=0;i<2;i++){
		printf("enter x[%d]=",i);
		scanf("%lf",& x[i]);
		}
}
void input2(double y[]){
	int j;
	for (j=0;j<2;j++){
		printf("enter y[%d]=",j);
	    scanf("%lf",& y[j]);
	}
}	