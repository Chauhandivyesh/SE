#include<stdio.h>
void change(int num)//parameters
{
	//body of function
	printf("Befor changing value %d \n",num);
	num = num+100;
	printf("after changing %d \n",num);
}

main()
{
	int num1=100;
	printf("befor calling function %d \n",num1);
	change(num1);//function calling,passing parameters
	printf("after changing %d \n",num1);
}
