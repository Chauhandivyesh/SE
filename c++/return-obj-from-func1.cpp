#include<iostream>
using namespace std;
class A {
	public:
		int a=23;
		string name="Hello";
};
//function to return object
A modify()
{
	A obj;
	
	obj.a=90;
	obj.name="word";
	
	return obj;
}

int main()
{
	A o1;
	A o2;
	
	cout<<o1.a<<endl;
	cout<<o1.name<<endl;
	
	o2=modify();
	
	cout<<o2.a<<endl;
	cout<<o2.name;
}
