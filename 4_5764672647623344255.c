#include <stdio.h>

int f_1(void){return 1;}
int f_2(void){return 2;}
/* can not use 
int (pf[2])(void)={f_1,f_2};
*/
int (*pf[2])(void)={f_1,f_2};

int main(){
   int i=0;
   printf("%d\n",pf[0]());
   printf("222222 ::::%d\n",pf[1]());
  return 0;
}

