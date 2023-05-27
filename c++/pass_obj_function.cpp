//passing object to a function

#include <iostream>
using namespace std;

class A
{
	public:
		int a1=23,a2=5;
};
void add(A obj)
{
	cout<<"Addition :"<<obj.a1+obj.a2; 
}

int main()
{
	A obj1;
	add(obj1);
	
	return 0;
}
