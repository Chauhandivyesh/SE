//wap to find lenght of string


#include <stdio.h>
int main (){
	//declaration of string
	char str1[20];
	int i,counter=0;
	
	//sting input
	printf("enter string :");
	gets(str1);
	
	//to print lenght of string
	for(i=0;str1[i]!='\0';i++)
	{
		counter++;
	}
	printf("string lenght : %d",counter);
	return 0;
}
