#include<stdio.h>
int someoftwo(int a,int b);
main(){
	int ans;
	ans=someoftwo(50,50);
	printf("\n ans is %d",ans);
	ans=someoftwo(100,100);
	printf("\n ans is %d",ans);
}
 int someoftwo(int a,int b)
{
	int c;
	c = a+b;
	return c;
}
