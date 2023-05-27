#include <stdio.h>
int main()
{
	int sci,eng,guj,social,hindi,total,percentage;
	printf("enter sci marks : \n");
	scanf("%d",&sci);
	printf("enter eng marks : \n");
	scanf("%d",&eng);
	printf("enter guj marks : \n");
	scanf("%d",&guj);
	printf("enter social marks : \n");
	scanf("%d",&social);
	printf("enter hindi marks : \n");
	scanf("%d",&hindi);
	
	total=sci+eng+guj+social+hindi;
	printf("total=%d\n",total);
	
	percentage=(total/5);
	printf("percentage=%d",percentage);
	
}
