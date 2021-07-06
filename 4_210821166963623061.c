









#include<stdio.h>
#include<stdlib.h>
typedef struct phoneNumberT{
  char name[50];char num[12]; 
  int age;char std[15];char address[100];
} phoneNumber;

int main(){ 
  phoneNumber a={"Ali Kazemi","344555",23,"0394830","dddd"};
  phoneNumber b={"Ali Nasr","1111555",19,"222830","tttt"};
  FILE *fp;
  fp=fopen("a21.txt","wb");
  if(!fp){printf("Cannot open file");exit(0);}
  fwrite(&a,sizeof(a),1,fp);
  fwrite(&b,sizeof(b),1,fp);
  fclose(fp);
  return 0;
}
  
