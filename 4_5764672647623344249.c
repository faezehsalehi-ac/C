#include<stdio.h>
long long factorial(int);
int  main(){
  long long int l; int n=20;
  l=factorial(n);
  printf("%lld\n",l);
  return 0;
}
long long factorial(int n){
  long long retVal=1;
  if(n>1)
    retVal= n * factorial(n-1);
  return retVal;
}
long long factorial1(int n){
  if(n<=1) 
    return n * factorial(n-1);
  return 1;
}
long long factorial2(int n){
  long long retVal=1;
  for(;n>0;n--) retVal*=n;
  return retVal;
}
