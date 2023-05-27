#include <stdio.h>
int main()
{
	int i,choice,quantity,total,amount,num,price,item,n;
	char ch,y;
	
	printf("=====Welcome To Tops Restaurent===== \n\n\n");

    printf("srno.\t item \t\t price\t \n\n");
    printf("1 \t pizza \t\t 100 \n");
    printf("2 \t buger \t\t 80 \n");
    printf("3 \t puri  \t\t 90 \n");
    printf("4 \t dhosa \t\t 70 \n");
    printf("5 \t water \t\t 20 \n \n");
	 
    printf("enter your choice item :\n");
	scanf("%d",&choice);
	printf("enter your quantity :\n");
	scanf("%d",&quantity);
	
	amount = item*quantity;
	printf("amount = %2f\n",amount++);
	 
	total = amount + quantity;
	printf("total = %2f\n",total);
	
	
	
	printf("Do you want Anything else ? [y/n] :");
	scanf("%s",&ch);
	if(ch == 'n'){
	printf("Thank you :\n");
	 
	total = amount + quantity;
	printf("total = %2f\n",total); 
	}
	
	else if(ch == 'y'){
	printf("enter your choice :");
	scanf("%d",&choice);
	
	printf("enter your quantity :");
	scanf("%d",&quantity);
	
	total = amount + quantity;
	printf("total = %2f\n",total); 
	}

}
