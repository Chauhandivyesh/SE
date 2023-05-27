#include <stdio.h>
int main()
{
	int a[5];
	int i,j,temp=0;
	
	// use to scan array element or to populate our array
	printf("Enter element : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i]>a[j])
			{
				//logic to swap number using third var
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("\n----------sorted array----------\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
		
	}
	
	return 0;
	
	
}
