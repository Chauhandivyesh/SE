#include <stdio.h>
int main (){
	//declaration of string
	char str1[20];
	
	printf("enter string :");
	gets(str1);//mutiline sting input
	
	printf("string is : %s\n",str1);
	puts(str1);//to print multi-line string
	
	return 0;
}
