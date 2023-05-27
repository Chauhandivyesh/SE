#include <iostream>
using namespace std;

int div(int n,int p)
{
	if(p==0)
	{
		throw"Can Not Divide By Zero";
	}
	else
	{
		return n/p;
	}
}

int main()
{
	int n1,n2;
	
	cout<<"Enter two number :";
	cin>>n1>>n2;
	
	try{
		cout<<"Division ="<<div(n1,n2);
	}
	catch(const char *e){
		cout<<"Error :"<<e;
	}
	return 0;
}
