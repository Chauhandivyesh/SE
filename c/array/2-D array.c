// array : 2-D matrix
# include <stdio.h>

int main(){
	int a[2][2];
	int i,j;
	
	
	//to take input
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	// to display oytcome
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",i,j);
		}
			printf("\n");
	}

	
}
