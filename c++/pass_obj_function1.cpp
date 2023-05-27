//passing object to a function

#include <iostream>
using namespace std;

class A
{
	public:
		int a,b;
	
};
void add(A obj)
{
    	cout<<"Enter value :";
		cin>>obj.a;
		cout<<"Enter value :";
		cin>>obj.b;
	    cout<<"Addition :"<<obj.a+obj.b; 
}

int main()
{
	A obj1;
	add(obj1);
	
	return 0;
}
