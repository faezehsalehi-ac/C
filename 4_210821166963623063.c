#include<stdio.h>
#include<stdlib.h>
typedef struct phoneNumberT{char name[50];long long num;} phoneNumber;
void write2file(const char*fname,phoneNumber*,int n);
int  readFromFile(const char*fname,phoneNumber*);
int  input(phoneNumber*,int max);
void print(phoneNumber*,int n);
const int maxNumberOfPhoneNumber=100;
int main(){
  const char fileName[]="binary.phoneNumber.b";
  phoneNumber a[maxNumberOfPhoneNumber]; int n;
  n=input(a,maxNumberOfPhoneNumber);
  write2file(fileName,a,n);
  n=readFromFile(fileName,a);
  print(a,n);
  return 0;
}
void write2file(const char*fname,phoneNumber*a,int n){
  FILE* fp;
  fp=fopen(fname,"w");
  if(!fp){printf("Cannot open file\n");exit(0);}
  fwrite(a,sizeof(phoneNumber),n,fp);
  fclose(fp);
}
int  readFromFile(const char*fname,phoneNumber*a){
  FILE* fp;int i=0;
  fp=fopen(fname,"r");
  if(!fp){printf("Cannot open file\n");exit(0);}
  fread(&a[i],sizeof(phoneNumber),1,fp);
  for(i=1;!feof(fp);i++)  fread(&a[i],sizeof(phoneNumber),1,fp);
  fclose(fp);  
  return i-1;
}
int  input(phoneNumber*a,int max){
  int i,n=0;
  do{
    printf("Enter number of entry ");
    scanf("%d",&n);
  }while(n<=0 || n>max);
  for(i=0;i<n;i++){
    printf("Enter name of %d ",i+1);
    scanf("%s",a[i].name);
    printf("Enter numer of %d ",i+1);
    scanf("%lld",&a[i].num);
  }
  return n;
}
void print(phoneNumber*a,int n){int i;
  for(i=0;i<n;i++)
    printf("%s\t\t\t%lld\n",a[i].name,a[i].num);
}
