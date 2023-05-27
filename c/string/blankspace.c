//wap to find lenght of string


#include <stdio.h>
int main (){
	//declaration of string
	char str1[20];
	int i,c_count=0,s_count=0;
	
	//sting input
	printf("enter string :");
	gets(str1);
	
	//to print lenght of string
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ')
		{
			s_count+=1;
		}
		else
		{
			c_count+=1;
		}
	}
	printf("char count : %d\n",c_count);
	printf("space count :%d",s_count);
	
	return 0;
}
