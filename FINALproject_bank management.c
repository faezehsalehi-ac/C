#include<stdio.h>
#include<stdlib.h>
struct account{
	int acno;//account number//
	char*name;//user name//
	int deposit;//user deposit//
};
void menu(void);
int choice(int,int);
int create_account(int);//function to add new user//
void edit_account(int);//function to edit data//
void deposit(int,double);//function to accept amount and add to balance amount//
void withdraw(int,double);//function to withdraw amount for given account//
void transfer(int,int,double);//function  to transfer amount//
void show_account(int);//function to show data on screen//
void delete_account(int);//function to delete record of file//
int search_account(void);//function to search account user//
void intro(void);
int main(){
	int n=100;
	struct account*acc;
	acc=(struct account*)malloc(sizeof(struct account)*n);
	menu();
	intro();
	return 0;
}
void show_account(int num){
	struct account*acc;
	printf("NAME:%s\n",acc[num].name);
	printf("ACCOUNT NUMBER:%d\n",acc[num].acno);
	printf("DEPOSIT:%lf\n",acc[num].deposit);
	
}
	
int search_account(void){
	struct account *acc;
	int num,i,ch;
	char *name;
	printf("ENTER 1 TO SEARCH WITH ACCOUNT NUMBER");
	scanf("%d",&ch);
	if(ch==1){
	  printf("ENTER THE ACCOUNT NUMBER:");
	  scanf("%d",&num);
	  for(i=0;i<10;i++){
	    if(acc[i].acno==num){ 
	       return i;
	     }
	  }
	}
	else{
		printf("ENTER 2 TO SEARCH WITH ACCOUNT NAME");
	    scanf("%d",&ch);
	    if(ch==2){
	       printf("ENTER THE ACCOUNT NAME:");
	       scanf("%s",name);
	       for(i=0;i<10;i++){
	           if(acc[i].acno==name){ 
	              return i;
	          }
	      }
	    }
		
	 
}
void menu(void){
	int ch;
	int i=10;
	printf("main menu:\n\n");
	printf("1.NEW ACCOUNT\n");
	printf("2.DELETE ACCOUNT\n");
	printf("3.EDIT ACCOUNT\n");
	printf("4.DESPITE AMOUNT\n");
	printf("5.WITHDROW AMOUNT\n");
	printf("6.TRANSFER AMOUNT\n");
	printf("7.SHOW AN ACCOUNT\n");
	printf("8.EXIT\n");
	printf("select your option:");
	scanf("%d",&ch);
	choice(ch,i);
}
int choice(int ch, int i){
	int num,nl,nh;
	double amt;
	switch(ch){
		case 1:
		  i++;
		  create_account(i);
		  break;
		case 2:
		  num=search_account();
		  delete_account(num);
		  break;
		case 3:
		  num=search_account();
          edit_account(num);
		  break;
		case 4:
		  num=search_account();
		  printf("ENTER THE AMOUNT TO BE DEPOSITED:");
		  scanf("%lf\n",&amt);
		  deposit(num,amt);
		  break;
		case 5:
		  num=search_account();
		  printf("ENTER THE AMOUNT TO BE WITHDRAWED");
		  scanf("%lf\n",&amt);
		  withdraw(num,amt);
		  break;
		case 6:
		  printf("ENTER LIQUIDATOR ");
		  nl=search_account();
		  printf("ENTER HARVESTER");
		  nh=search_account();
		  printf("ENTER THE AMOUNT TO BE TRANSFERED");
		  scanf("%lf\n",&amt);
		  transfer(nl,nh,amt);
		  break;
		case 7:
		  num=search_account();
		  show_account(num);
		  break;
		case 8:
		  printf("THANKS FOR USING BANK MANAGEMENT SYSTEM");
		  break;
		  default:
		  printf("ERROR\n");
		  break;
	}
	return i;
		  
}
void deposit(int num,double amt){
	acc[num].deposit+=amt;
}
void intro(void){
	printf("BANK MANAGEMENT SYSTEM\n");
	printf("MADE BY:\n");
	printf("ZAHRA NIKBAKHT");
	printf("FAEZEH SALEHI");
	printf("NILOOFAR ETTEHADI");
}
 int create_account(int i){
	struct account *acc;
	int m=10000;
	printf("ENTER THE NAME OF THE ACCOUNT HOLDER:");
	scanf("%s\n",acc[i].name);
	printf("ENTER THE INITIAL AMOUNT>50000 FOR SAVING");
	scanf("%lf\n",acc[i].deposit);
	if(acc[i].deposit<=50000){
		printf("ENTER THE INITIAL AMOUNT>50000 FOR SAVING");
	    scanf("%lf\n",acc[i].deposit);
	}
	acc[i].acno=m+i;
	printf("\nACCOUNT (%d)CREATED...",i);
	return i;
}
void withdraw(int num, double amt){
	acc[num].deposit-=amt;
	if(acc[num].deposit<50000){
		acc[num].deposit+=amt;
		printf("YOU CAN NOT WITHDRAW THIS AMOUNT FROM YOUR ACCOUNT");
	}
}
void transfer(int nl,int nh,double amt){
	acc[nl].deposit-=amt;
	if(acc[nl].deposit>50000){
		acc[nh].deposit+=amt;
	}
	else{
		printf("YOU CAN NOT TRANSFER THIS AMOUNT");
		acc[nl].deposit+=amt;
	}
} 
void edit_account(int num){
	struct account *acc;
	for(;acc[num].name;acc[num].name++){
	   acc[num].name='0';
	}
	printf("ENTER NEW NAME");
	scanf("%s",acc[num].name);
}
void delete_account(int num){
	struct account *acc;
	for(;acc[num].name;acc[num].name++)
	   acc[num].name='0';
	acc[num].name="EMPTY FILE";
	acc[num].deposit=0;
	printf("THE ACCOUNT (%d) IS DELETED..",num);
}

	
	
	
		  
		  
		  
		  
