#include<stdio.h>
main()
{
	int i,num[5],a5[5],a2[5],a10[5],j=0,k=0,l=0;
	for(i=0;i<5;i++)

   {
 		printf("Enter your value :");
 		scanf("%d",&num[i]);
 		if(num[i]%2==0)
	{
		a2[j]=num[i];
		j++;
	}
	if(num[i]%5==0)
	{
	a5[k]=num[i];
	k++;	
	}
	if(num[i]%10==0)
	{
	a10[l]=num[i];
	l++;	
	}
	
	}
	
	printf("\n This is data 2 :");
	for(i=0;i<j;i++)
	{
		printf("%d \t",a2[i]);
		}
		printf("\n This is data 5 :");
	for(i=0;i<k;i++)
	{
		printf("%d \t",a5[i]);
		}
		printf("\n This is data 10 :");
	for(i=0;i<l;i++)
	{
		printf("%d \t",a10[i]);
		}	
}
