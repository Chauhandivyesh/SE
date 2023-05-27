#include <iostream>
using namespace std;

int find(int num)
{
	if (num<=0)
	{
		return 0;
	}
	else
	{
		return num+find(num-1);
	}
}

int main()
{
   int ip;
   
   cout<<"Enter any number :";
   cin>>ip;
   
   cout<<"Addition of natural numbers : "<<find(ip);
   
   return 0;	
}
