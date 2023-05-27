#include <stdio.h>
int main()
{
	int choice,area,l,b,h;
	float r,carea;
	
	printf("=====Area Founder===== \n");
	
	printf("1 triangle :\n");
	printf("2 circle :\n");
	printf("3 rectangle :\n");
	
	 printf("enter your choice :");
	 scanf("%d",&choice);
	 
	 
	if(choice==1)
	 {
	 	printf("enter base & hight \n");
	 	scanf("%d %d",&b,&h);
	 	
	 	area=b*h/2;
	 	printf("triangle = %d",area);
	 }
	else if(choice==2)
	 {
	 	printf("enter radius \n");
	 	scanf("%f",&r);
	 	carea=2*3.14*r;
	 	printf("circle = %f",carea);
	 }
	else if(choice==3)
	 {
	 	printf("enter base & length\n");
	 	scanf("%d %d",&b,&l);
	 	area=l*b;
	 	printf("rectangle = %d",area);
	 }
}
