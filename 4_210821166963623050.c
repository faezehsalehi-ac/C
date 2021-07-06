#include <stdio.h>
#include <stdlib.h>
typedef struct { double coef ;int  exp ; } term;
typedef struct { int n ; term * t ;} poly;
poly mulPoly(poly p1 , poly p2);poly inputPoly(void);void printPoly(poly);
void releasePoly(poly ); poly toStandardPoly(poly);
void unrecoverableError(char *msg);
int main(){
	poly p1 ,  p2 , p3;	p1=inputPoly(); p2=inputPoly();
	p3 = mulPoly(p1 ,  p2); printPoly(p3); return 0;
}
poly inputPoly(void){
	poly in; int i ;
	printf("Enter number of term "); scanf("%d", &in.n);
	if(!(in.t=(term *)malloc(sizeof(term) * in.n)))
		unrecoverableError("can not allocate memory.");
	for(i=0;i<in.n;i++){
		printf("Enter coefficient of term %d : ", i); scanf("%lf",&in.t[i].coef);
		printf("Enter exponent term %d : "  , i);  scanf("%d",&in.t[i].exp);
	}
	return in;
}
void printPoly(poly p1){
	int i; printf("number of terms is %d \n" , p1.n);
	for(i=0; i<p1.n ; i++)
		printf("coef of term[%d] is :%lf  |||  exponet of term[%d] is %d \n",
		       i,p1.t[i].coef , i , p1.t[i].exp );
}
void releasePoly(poly p1){free(p1.t);}
void unrecoverableError(char *msg){
	int m; printf("%s\n",msg); printf("Enter a number and press Enter to exit ");
	scanf("%d",&m); exit (0);
}
poly mulPoly(poly p1 , poly p2){
	poly ret_poly; poly temp_poly;	int i, j,k=0;
	temp_poly.n= p1.n * p2.n ;
	temp_poly.t = (term *) malloc(sizeof(term) * temp_poly.n);
	for(i=0 ; i<p1.n ;i++)
		for(j=0 ; j<p2.n ; j++){
			temp_poly.t[k].coef= p1.t[i].coef * p2.t[j].coef;
			temp_poly.t[k].exp = p1.t[i].exp + p2.t[j].exp;
			k++;
		}
		ret_poly = toStandardPoly(temp_poly);
		free(temp_poly.t);
		return ret_poly;
}
poly toStandardPoly(poly nons){
	poly ret_poly ;int i , j ;term temp;
	for(i=0;i<nons.n - 1 ;i++)
		for(j=i+1; j< nons.n; j++)
			if(nons.t[i].exp > nons.t[j].exp)
			{temp = nons.t[i]; nons.t[i] = nons.t[j];nons.t[j] = temp;}
	for(i=0 , j=1 ; j<nons.n; j++)
		if(nons.t[i].exp == nons.t[j].exp){
			nons.t[i].coef += nons.t[j].coef;
			nons.t[j].coef = 0;
		}else i++;
	for(i=ret_poly.n=0; i<nons.n ; i++)
		if(nons.t[i].coef != 0) ret_poly.n++;
	if(!(ret_poly.t=(term *) malloc(sizeof(term) * ret_poly.n)))
		unrecoverableError("can not allocate memory.");
	for(i=j=0 ; i<nons.n ; i++)
		if(nons.t[i].coef != 0)	ret_poly.t[j++]=nons.t[i];
	return ret_poly;
}
