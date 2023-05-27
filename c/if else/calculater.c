#include<stdio.h>
int main()
{
	int a,b,c,result;
	char ch;
	
	printf("enter (+,-,*,/) :");
	scanf("%c",&ch);
	fflush(stdin);
	printf("enter your no. \n:");
	scanf("%d",&a);
	
	printf("enter your no.\n");
	scanf("%d",&b);
	switch (ch){
		case'+':
			c=a+b;
			printf("enter %d",c);
			break;
		case'-':
		    c=a-b;
			printf("enter %d",c);
			break;
		case'*':
			c=a*b;
			printf("enter %d",c);
			break;
		case'/':
		    c=a/b;
			printf("enter %d",c);
			break;
					
	printf("result= %d",result);
}
	return 0;
}
