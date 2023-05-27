
#include <stdio.h>  
  
int main()  
{  
    int i,j;
	   
    for( i=0;i<5;i++)  
    {  

        for( j=0;j<5;j++)
		 
        {  
        if(i==j||i==0 && j==4||i==1 && j==3||i==2 && j==2||i==1 && j==1)
            {
        	printf("$");
		    }
		    else
			{
			printf("*"); 
			}    
	    }
	    
		printf("\n"); 
		 
    }  
        return 0;  
}
