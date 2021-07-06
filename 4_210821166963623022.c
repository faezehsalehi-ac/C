#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* strcpy , strcmp, strlen, ... */
typedef struct m_student{
  char pid[14];
  char *name;
} student;
student input(void);
void print(student);
int myStrLen(char*);
char * myStrCopy(char*);
int getChoice(void);
void doSomething(int s);
int main(){
  int s=1;char *st="12 ali 34.3";double x;
  char st1[100];
  do{
    s=getChoice();
    doSomething(s);
  }while(s);
  sscanf(st,"%d%s%lf",&s,st1,&x);
  printf("%d %s %lf \n",s,st1,x);
  return 0;
}
void doSomething(int s){
  static int n=0; static student st1[100];
  switch(s){
    case 1:
      st1[n]=input();
      n++;
    break;
    case 2:
      printf("delete \n");
    case 3:
    /*case 4:
    case 5:*/
      print(st1[0]);
    break;
    case 0:
      s=0;/*exit(0);*/
    break;
    default:
    break;
  }
}
int getChoice(void){
  int s;

  printf("\n\n\n\n");
  printf("1.Append student \n");
  printf("2.Delete student \n");
  printf("3.print student \n");
  printf("0. exit \n");
  printf("Enter your choice ");
  scanf("%d",&s);
  return s;
}
void print(student stu){
  printf("%s\n",stu.pid);
  printf("%s\n",stu.name);
}
student input(void){
  char st1[100];
  student stu;/*char c;*/
  printf("Enter number ");
  scanf("%s",stu.pid);
  printf("Enter name ");
  /*scanf("%c",&c);
  scanf("%[^\n]",st1);*/
  scanf("\n%[^\n]",st1);
  //getline(pp,&k);
  stu.name=myStrCopy(st1);
  return stu;
}
int myStrLen(char*s){
  int i;// "a" {'a' , '\0'}
  for(i=0;s[i];i++);
  return i;
}
char *myStrCopy(char *s){
  char *d;
  int n,i;
  n=myStrLen(s);
  d = (char *) malloc((n+1)*sizeof(char));
  // i++ , ++i
  //while(*d++=*s++); d-=n+1;
  /*for(;*s; s++,d++) *d=*s;
  *d=0;
  */
  for(i=0;s[i]!=0;i++)
    d[i]=s[i];
  d[i]='\0';
  return d;
}