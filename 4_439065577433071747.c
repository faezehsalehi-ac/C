#include <stdio.h>
int main()
{
	int n;
	int answer;
	int c;
	answer = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	c = n;
	if(n == 0){
		answer = 1;
	}
	if(n != 0){
		while(c > 1){
			answer = answer * c;
			c = c - 1;
		}
	}
	printf("Answer is %d\n", answer);
	return 0;
}
