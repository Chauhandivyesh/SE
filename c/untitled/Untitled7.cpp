#include<stdio.h>
int main()
{
	int num,stutas=1;
	char choice;
	
	while( stutas)
	{
		printf("enter number :");
		scanf("%d",&num);
		
		fflush(stdin);
		printf("do you want to continue?[y\n]" );
		scanf("%c",&choice);
		
		if(choice=='y')
		{
			stutas=1;
		}
		else
		{
		    stutas=0;	
		}
	}
}
