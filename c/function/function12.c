 //Example for Function without argument and with return value

#include<stdio.h>  
  
void main()  
{  
    int result;   
    printf("\n calculate the sum of two numbers:");  
    result = sum();  
    printf("%d",result);  
}  
int sum()  
{  
    int a,b;   
    printf("\n Enter two numbers");  
    scanf("%d %d",&a,&b);  
    return a+b;   
}  
