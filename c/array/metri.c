#include<stdio.h>
main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter the value : %d %d",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("this is single metrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}
