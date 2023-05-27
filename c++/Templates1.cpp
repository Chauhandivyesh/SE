#include <iostream>
using namespace std;

template <typename T>
class A{
	public:
		T a,b;//using template data_type in var
		
		void input()
		{
			cout<<"Enter value 1 :";
			cin>>a;
			cout<<"Enter value 2 :";
			cin>>b;
		}
		
		void display()
		{
			cout<<"value 1 :"<<a<<endl;
			cout<<"value 2 :"<<b<<endl;
		}
};

int main()
{
	A <int>obj1;
	cout<<"\n\n==========for int value===========\n\n";
	obj1.input();
	obj1.display();
	
	A <float>obj2;
	cout<<"\n\n==========for float value===========\n\n";
	obj2.input();
	obj2.display();
	
	A <char>obj3;
	cout<<"\n\n==========for char value===========\n\n";
	obj3.input();
	obj3.display();
}
