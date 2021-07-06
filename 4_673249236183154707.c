#include<stdio.h>
int main(){
	int n;
	int m;
	int k;
	int z;
	int a;
	printf("enter n");
	scanf("%d",&n);
	k=100;
	z=0;
	while(n>0){
		m=0;
		if(n<10){
			k=k/100;
			a=(n-(n/10)*10)*k;
			z=z+a;
			n=n/10;
		}
		if(n>=10){
			while(m<2){
				k=k/10;
				a=(n-(n/10)*10)*k;
				n=n/10;
				z=z+a;
				m=m+1;
			}
		}
		k=k*10000;
	}
	printf("%d\n",z);
	return 0;
}