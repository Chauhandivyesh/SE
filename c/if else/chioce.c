#include <stdio.h>

int main()
{
    int first, second, add, subtract, multiply,modulo;
    float divide;
    
    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);
    
    add        = first + second;
    subtract = first - second;
    multiply = first * second;
    divide     = first / (float)second;   //typecasting
    modulo =first % (int)second;
	
	printf("Sum = %d\n",add);
    printf("Difference = %d\n",subtract);
    printf("Multiplication = %d\n",multiply);
    printf("Division = %.2f\n",divide);
    printf("modulo = divide*%/100 \n",modulo);
    
    
    prtinf("Do you want to continue ? [y/n]");
    
    if("no"){
    	printf("Thank you");
	}
	if("yes"){
		printf("repeat the process");
	}
	
    
    

}
