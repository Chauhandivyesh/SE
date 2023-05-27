#include<stdio.h>
main(){
	int x[100],i,n,even=0,odd=0;
	printf("\n enter your limit :");
	  scanf("%d",&n);
	  
	printf("\n enter value");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);	
	}
	for(i=0;i<n;i++){
		if(x[i]%2==0){
			printf("\n %d is even",x[i]);
			even++;
		}
		else{
			printf("\n %d is odd",x[i]);
			odd++;
		}
	}
	printf("\n total odd no %d",odd);
	printf("\n total even no %d",even);
	
}
