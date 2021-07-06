






#include<stdio.h>
typedef struct phoneNumberT{
  char name[20];
  char number[10];
} phoneNumber;  
int main(){
	FILE *fp;phoneNumber a; int i=0,n;
	/*fp=fopen("phoneNumber.txt","w");	if(fp==0)  return 0;
  printf("Enter n ");scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter a[%d] ",i);scanf("%d",&a);
    fprintf(fp,"%d\n",a);
	}
	fclose(fp);*/
  return 0;
}
