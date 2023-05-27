#include <stdio.h>
void restaurantMenu();
int main()
{
	restaurantMenu();
	
	return 0;
}
void restaurantMenu()
{
	int i,result,choice,quantity,price,sum=0,count=0;
	char run;
	
	printf("=====Welcome To Tops Restaurent===== \n\n\n");
    
    printf("srno.\t item \t\t price\t \n\n");
    printf("1 \t pizza \t\t 100 \n");
    printf("2 \t buger \t\t 80 \n");
    printf("3 \t puri  \t\t 90 \n");
    printf("4 \t dhosa \t\t 70 \n");

    
    do{
    	printf("\nEnter your choice:");
    	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("your item:pizza\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=100;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
		case 2:
			printf("your item:burger\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=80;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
		case 3:
			printf("your item:puri\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=90;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
		case 4:
			printf("your item:dhosa\n");
			printf("enter quantity:");
			scanf("%d",&quantity);
			price=70;
			result=quantity * price;
			printf("Total price:%d\n",result);
			break;
			
			default:
			printf("invalid input\n");
			break;	
    }
    
    fflush(stdin);
    printf("Do you want anything else?[y/n]");
    scanf("%c",run);
    sum=sum+result;
    if(run=='n')
	{
    	printf("Thank you\n");
    	
    	printf("your total bill:%d rs.\n",sum);
	}
  }  
  while(run=='y');

}
