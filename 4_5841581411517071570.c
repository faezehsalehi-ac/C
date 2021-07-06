#include<iostream>
using namespace std;
struct circle{
	int R;
	float masahat;
	float mohit;
	void input_R(void ){
		cout<<"enter R:";cin>>R;}
	void calculate(void ){
		masahat=R*R*3/14;
		mohit=2*3/14*R;
	}
	void print(void){
		cout<<"masahat="<<masahat;
		cout<<"mohit="<<mohit;
	}
};
struct rectangle{
	int a,b;
	float mohit,masahat;
	void inputData(void ){
		cout<<"enter length:";
		cin>>a;
		cout<<"enter width";
		cin>>b;
	}
	void calculate(void ){
		mohit=2*(a+b);
		masahat=a*b;
	}
	void print(void ){
		cout <<"masahat="<<masahat;
		cout<<"mohit="<<mohit;
	}
};
int main(){
	circle c;
	c.input_R();
	c.calculate();
	c.print();
	rectangle r;
	r.inputData();
	r.calculate();
	r.print();
	return 0;
}

		
	
	
	

		