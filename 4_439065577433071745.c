#include <stdio.h>
int main()
{
	int star;
	int i;
	int j;
	i = 0;
	j = 0;
	printf("Enter Star: ");
	scanf("%d", &star);
	while(i <= (2 * star) - 2)
	{
		j = 0;
		if(i < star - 1){
			while(j < i + 1){
				printf("*");
				j = j + 1;
			}
		}
		if(i >= star - 1){
			while(j < ((2 * star) - 1) - i){
				printf("*");
				j = j + 1;
			}
		}
		printf("\n");
		i = i + 1;
	}
	return 0;
}
