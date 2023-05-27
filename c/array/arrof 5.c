#include <stdio.h>
main()
{
 	int total,marks, s1,s2,s3,percentage;
 	
 	printf("Enter your marks for s1 :");
 	scanf("%d",&s1);
 	printf("Enter your marks for s2 :");
 	scanf("%d",&s2);
  	printf("Enter your marks for s3 :");
 	scanf("%d",&s3);
 	
 	total=s1+s2+s3;
 	printf("your total %d \n",total);
 	
 	percentage=(total*100)/300;
	printf("your percentage  %d \n",percentage);  	
 	
 	
 	if(percentage<=100 && percentage > 0)
 	{
 		if(percentage >=75 && percentage <100)
 		{
 			printf("distinction");
 		}
 		
 		else if(percentage>=60 && percentage <75) 
		{
		 	printf("first class");
		}
		
		else if(percentage>=50 && percentage <60)
		{
		 	printf("second class");
		}
		 	
		else if(percentage>=35 && percentage <50)
	    {
		 	printf("pass class");
		}
		
		else if(percentage<35) 
		{
		 	printf("Fail");
		}
    }
		else
		{
	 	    printf(" You have enterd wrong value");
	    }
	    return 0;
	    
}
    
 
