#include<stdio.h>
 main()
 {
 	int number;
 	
 	printf("Enter your choise");
 	scanf("%d",&number);
 	
 	switch(number){
 		case 1:
 			printf("Monday");
 			break;
 		case 2:
		    printf("Tuseday");
			break;
		case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        }
    
 }
