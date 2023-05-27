 #include <stdio.h>
 
 void sum( int,int);
 main(){
 	int c,d;
    printf("enter the value");
 	scanf("%d %d",&c,&d);	
    sum(c,d);//calling function	
 }
 
 void sum(int a,int b)
 {
 	printf("this is your addtion %d",a+b);
 }
