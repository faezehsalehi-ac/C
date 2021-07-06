#include<stdio.h>

void hanoi(int n, char*b,int s, int d,int a){
  if(n==1) printf("%c==>%c\n",b[s],b[d]);
  else{
    hanoi(n-1,b,s,a,d);
    printf("%c==>%c\n",b[s],b[d]);
    hanoi(n-1,b,a,d,s);
  }
}
int main(){
  char b[3]={'s','a','d'}; int a=1,s=0,d=2;
  int n=5; printf("Enter n: "); scanf("%d",&n);
  hanoi(n,b,s,d,a);
  return 0;
  }
