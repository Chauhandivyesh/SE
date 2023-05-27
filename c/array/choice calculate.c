#include <stdio.h>

int main()
{
	int choice,a,b,c;
	printf("=====choice bord===== \n");
	
	printf("1 addition :\n");
	printf("2 substraction :\n");
	printf("3 muitiplication :\n");
	printf("4 division :\n");	

	printf("5 modulo :\n");
	printf("6 exit : \n \n");
	
	 printf("enter your choice :");
	 scanf("%d",&choice);
	 
	 printf("enter value of a :");
	 scanf("%d",&a);
	 printf("enter value of b :");
	 scanf("%d",&b);
	 
	 if(choice==1)
	 {
	 	c=a+b;
	 	printf("addition = %d",c);
	 }
	 else if(choice==2)
	 {
	 	c=a-b;
	 	printf("substraction = %d",c);
	 }
	  else if(choice==3)
	 {
	 	c=a*b;
	 	printf("multipication = %d",c);
	 }
	  else if(choice==4)
	 {
	 	c=a/b;
	 	printf("division= %d",c);
	 }
	  else if(choice==5)
	 {
	 	c=a%b;
	 	printf("modulo = %d",c);
	 }
	 else
	 {
	 	printf("exit");
	 }
	 	 
}
