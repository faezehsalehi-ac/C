








#include<stdio.h>
int main(){
	FILE *fp;int a[20],i=0;double d,sum=0;
	fp=fopen("A.txt","r");	if(fp==0)  return 0;
  fscanf(fp,"%d",&a[i]);
  for(;!feof(fp) && i<20;){
       printf("%d\n",a[i]);
	     sum+=a[i];i++;
       fscanf(fp,"%d",&a[i]);
	}
	d=sum/i;    printf("%d\n",i);  	printf("%lf\t%lf\n",sum,d);
	fclose(fp);
  return 0;
}
