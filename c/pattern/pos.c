#include <stdio.h>
 
void main()
{
 int i,last;

 printf("Enter The Last Number : ");
 scanf("%d",&last);

 printf("\npositive Number List :\n ");
 
 for(i=2; i<=last; i=i+2){
   printf(" %d",i);
 }

 printf("\n nigetive Number List :\n ");

 for(i=1; i<=last; i=i+2){
   printf(" %d",i);
 }
}
