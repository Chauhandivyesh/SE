//wap to find lenght of string


#include<stdio.h>
int main (){
	//declaration of string
	char ch[100];
	int i,d,c=0,s_count=0,digit=0,upper=0,lower=0,lenght;
	
	//sting input
	printf("enter string :");
	gets(ch);
	
	//to print of string
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			continue;
		}
		if(ch[i]>'0'&& ch[i]<'9')
		{
			continue;
		}
		lenght++;
	}
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			c++;
		}
		
	}
	for(i=0;ch[i]!='0';i++)
	{
		if(ch[i]>'0' && ch[i]<'9')
		{
			digit++;
		}
	}
	for(i=0;ch[i]!='0';i++)
	{
	    if(ch[i]>='A' && ch[i]<='Z')
		{
			upper++;
		}	
	}
	for(i=0;ch[i]!='0';i++)
	{
	    if(ch[i]>='a' && ch[i]<='z')
		{
			lower++;
		}	
	}
	
	
	printf("char count : %d\n",lenght);
	printf("space count :%d\n",s_count);
	printf("digit count :%d\n",digit);
	printf("upper count :%d\n",upper);
	printf("lower count :%d\n",lower);
	
	return 0;
}
