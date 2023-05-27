 //Example for Function without argument and return value
 
 #include <stdio.h>
 void main()  
{  
    printf("\n calculate the sum of two numbers:");  
    sum();  
}  
void sum()  
{  
    int a,b;   
    printf("\n Enter two numbers");  
    scanf("%d %d",&a,&b);   
    printf("The sum is %d",a+b);  
}  
