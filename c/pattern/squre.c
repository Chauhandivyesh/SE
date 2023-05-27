#include<stdio.h>
int main()
{
  int i, c;

  for(i=0; i<=5; i++)
  {
    for(c=0; c<=i; c++)
    {
      if(i==0 && c==0)printf("*");
      else printf("$");
    }

    printf("\n");
  }

  return 0;
}
