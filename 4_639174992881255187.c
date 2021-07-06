#include <stdio.h>
int main(){
	int a = 14;
	int b = 2;
	int res = 0;
	int n = 1;
	int baqimande;
	while(a >= 1){
		baqimande = a;
		while( baqimande >= b ){
			baqimande = baqimande - b;
		}
		a = a / b;
		res = n*baqimande + res ;
		n = n * 10;
	}
	printf("%d",res);
	return 0;
}
			
	
