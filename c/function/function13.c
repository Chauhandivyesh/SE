// Example for Function with argument and without return value
 
#include <stdio.h>
void avg(int,int,int,int,int);
void main()

{
	int a,b,c,d,e;
    printf("\n Going to calculate the average of five numbers:");  
	printf("\n enter the five number :");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	avg(a,b,c,d,e);
 } 
 
 void avg(int a,int b,int c,int d,int e)
 {
 float avg;
 avg= (a+b+c+d+e)/5;
 printf("the average of given five number :%f",avg);
 
 }
