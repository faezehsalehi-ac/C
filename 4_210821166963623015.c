#include<stdio.h>
int main(){
	int A[12] = {1 ,2 };
	int B[4][5]={{1,2,3},{4,5,6,7,8},{2,4,6,7,8}};
	int i =0 ,j;
	for(i=0;i<10;i++) printf("%d\n",A[i]);
	for(i=0;i<4;i++){
		for(j=0;j<5;j++)
			printf("%d\t\t",B[i][j]);
		printf("\n");
	}
	return 0;
}
