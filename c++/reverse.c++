#include<iostream>
using namespace std;

int main()
{
	int num,rem=0,rev=0;
	
	cout<<"Enter number :";
	cin>>num;
	
	while(num>0)
	{
		rem=num%10;  //rem=1
		rev=rev*10+rem;  //re321
		num=num/10;  //num=0
	}
	
	cout<<"Reverse number :"<<rev;
	
	return 0;
}
