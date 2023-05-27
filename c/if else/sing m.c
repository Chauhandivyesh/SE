#include<stdio.h>

main() {
	int n,i,j;
	printf("enter elements of an array:");
	scanf("%d",&n);
	
	int arr1[n][n],arr2[n][n],multi[n][n];
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("element-%d %d:",i,j);
			scanf("%d",arr1[i][j]);
		}
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("element-%d",i);
			scanf("%d",arr2[i][j]);
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			multi[i][j]=arr1[i][j] * arr2[i][j];
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
