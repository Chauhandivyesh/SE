#include<stdio.h>
main()
{
	int i,k;
	// outer loop
	for (k=0;k<5;k++)
	{
		// inner loop
		for (i=0;i<5;i++)
		{
		
		if(i==2 && k==2)
		{
		
			printf("$");	
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;

}

