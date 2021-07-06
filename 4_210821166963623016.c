
/* C-examples/arrays-and-pointers/pointers.c */

/*
 * Example to illustrate pointer magic in  C
 *
 */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int z1 = 15;
	int *y;
	int z2;
	int **x;

	y = (int *) malloc(sizeof(int)); 
	*y = z1;
	printf("*y = %d\n",*y);

	z2 = 10;
	y = &z2;
	printf("*y = %d\n",*y);
	printf("y = %p address of z2 = %p\n",y,&z2);
	z2 = 22;
	printf("*y (after changing z2) = %d\n",*y);
	printf("\n");


	x = (int **) malloc(sizeof(int *));
	*x = (int *) malloc(sizeof(int));
	**x = 5;
	printf("&x = %p  x = %p *x = %p  **x = %d \n",&x, x, *x, **x);

	exit(0);
}
