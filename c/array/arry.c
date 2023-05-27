#include<stdio.h>
main(){
	int x[100],i,n;
	printf("\n enter your limit :");
	  scanf("%d",&n);
	  
	printf("\n enter value");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
		
	}
	for(i=0;i<n;i++){
		if(x[i]%2==0){
			printf("\n %d is even",x[i]);
		}
		else{
			printf(" \n %d is odd",x[i]);
		}
		
	}
	
}

