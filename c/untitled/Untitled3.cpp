#include<stdio.h>
int someoftwo(int a,int b);
double rateofinterest(float p,float r,float n);
main(){
	int ans;
	double rate;
	ans=someoftwo(50,50);
	//printf("\n ans is %d",ans);
	ans=someoftwo(100,100);
	//printf("\n ans is %d",ans);
	rate=rateofinterest(1000,10,1);
}
 int someoftwo(int a,int b)
{
	int c;
	c = a+b;
	return c;
}
double rateofinterest(float p,float r,float n){
	return(p*r*n)/100;
}
