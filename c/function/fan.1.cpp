 #include <stdio.h>
 
 void sum();
 main(){
   printf("This is your addtion of two number \n");
   sum();//calling function	
 }
 
 void sum()
 {
 	int a,b;
 	printf("enter the value");
 	scanf("%d %d",&a,&b);
 	printf("this is your addtion %d",a+b);
 }
