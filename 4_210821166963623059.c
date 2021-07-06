












#include<stdio.h>
int main(){
	FILE *fp;int a,i=0,n;
	fp=fopen("A.txt","a");	if(fp==0)  return 0;
  printf("Enter n ");scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter a[%d] ",i);scanf("%d",&a);
    fprintf(fp,"%d\n",a);
	}
	fclose(fp);
  return 0;
}
