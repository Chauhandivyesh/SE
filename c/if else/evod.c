 #include <stdio.h>
 main()
 {
 	int i,j=0,k=0,even[5],odd[5],a[5];
 	for(i=0;i<5;i++)
 	{
 		//storing value in array
 		printf("Enter your value :");
 		scanf("%d",&a[i]);
 		if(a[i]%2==0)
 		{
 			even[j]=a[i];
 			j++;
		 }
		 if(a[i]%2!=0)
		 {
		 	odd[k]=a[i];
		 	k++;
		 }
	 }
	    printf("This is even numbers of data :");
	    for(i=0;i<=j;i++)
	    {
	    	//showing the value of array
	    	printf("%d \t",even[i]);
		}
 
  printf("this is your odd value");
        for(i=0;i<=k;i++)
        {
        	printf("%d \t",odd[i]);
		}
		
	}
