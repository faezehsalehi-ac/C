#include<stdio.h>
#include<stdlib.h>
int inputArray(int **pa);
void printArray(int*pa,int n);
int inputArray_wrong(int *);
int* inputArray2(int* n);
int main(){  int *pa,n,i,**ppa;
  ppa=&pa; pa = 0x8945792475;
  printf("pa=%p\n",pa);
  n=inputArray_wrong(pa);
  printf("pa=%p\n",pa);
  printArray(pa,n);
  //free(pa);pa=0;
  return 0;
}
int inputArray_wrong(int *pa){
  int i,n;int *pa2;
  printf("Enter n ");
  scanf("%d",&n);
  pa=(int*)malloc(sizeof(int)*n);
  pa2=pa;
  for(i=0;i<n;i++,pa2++){
    printf("Enter p[%d] ",i);
    scanf("%d",pa2);
  }
  return n;
}
int inputArray(int **ppa){
  int i,n;int *pa2;//=*pa;
  printf("Enter n ");
  scanf("%d",&n);
  *ppa=(int*)malloc(sizeof(int)*n);
  pa2=*ppa;
  for(i=0;i<n;i++,pa2++){
    printf("Enter p[%d] ",i);
    scanf("%d",pa2);
  }
  return n;
}
void printArray(int*pa,int n){
  for(;n>0;n--)
    printf("%d\n",*pa++);
}
int* inputArray2(int* n){
  int i;int *pa,*pa2;
  printf("Enter n ");
  scanf("%d",n);
  pa=(int*)malloc(sizeof(int)**n);
  pa2=pa;
  for(i=0;i<*n;i++,pa2++){
    printf("Enter p[%d] ",i);
    scanf("%d",pa2);
  }
  return pa;
}