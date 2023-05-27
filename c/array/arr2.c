#include<stdio.h>
main(){
	int x[100],i,n;
	printf("\n enter your limit :");
	  scanf("%d",&n);
	printf("\n enter 10 value");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<n;i++){
		printf(" \n %d",x[i]);
	}
	
}
