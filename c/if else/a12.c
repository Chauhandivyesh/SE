#include <stdio.h>
main()
{
 	int total,marks,s1,s2,s3;
 	
 	printf("Enter your marks for s1 :");
 	scanf("%d",&s1);
 	printf("Enter your marks for s2 :");
 	scanf("%d",&s2);
  	printf("Enter your marks for s3 :");
 	scanf("%d",&s3);
 	
 	if(s1>s2)
	 {
 		if(s1>s3){
 			printf("%d is largest",s1);
		 }
		 else{
		 	printf("%d is largest",s3);
		 }
	 }
	 else
	 if(s2>s3)
	 {
		printf("%d is largest",s2);
	 }
	 else
	 {
	 	printf("%d is largest",s3);
	 }
 	
 	
 }
