//count vowels and consonants from string


#include <stdio.h>
int main (){
	//declaration of string
	char ch[30];
	int i,c_count=0,v_count=0;
	
	//sting input
	printf("enter string :");
	gets(ch);
	
	//print vowel and consonants from string
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	printf("consonants : %d\n",c_count);
	printf(" The Number of vowels :%d",v_count);
	
	return 0;
}
