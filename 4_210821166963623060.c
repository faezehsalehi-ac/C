









#include<stdio.h>
#include<stdlib.h>
typedef struct phoneNumberT{
  char name[50];char num[12]; 
  int age;char std[15];char address[100];
} phoneNumber;

int main(){ 
  phoneNumber a;//={"Ali Kazemi","344555",23,"0394830","dddd"};
  phoneNumber b;//={"Ali Nasr","1111555",19,"222830","tttt"};
  FILE *fp;
  fp=fopen("a21.txt","rb");
  if(!fp){printf("Cannot open file");exit(0);}
  fread(&a,sizeof(a),1,fp);
  fread(&b,sizeof(b),1,fp);
  printf("%s\t%s\t%d\t%s\t%s\n",a.name,a.num,a.age,a.std,a.address);
  printf("%s\t%s\t%d\t%s\t%s\n",b.name,b.num,b.age,b.std,b.address);
  fclose(fp);
  return 0;
}
  
