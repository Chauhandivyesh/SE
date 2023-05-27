//polymorphism : operatar overloading

#include <iostream>
using namespace std;

class Sample{
	public:
		// class variable
		int a;
		
		Sample(int num)
		{
			a=num;
		}
		//passsing object to function
		//operator keyword
		void operator +(Sample obj)
		{
			cout<<"Addition :"<<a+obj.a;
		}
};

int main()
{
	Sample o1(12);
	Sample o2(23);
	
	o1+o2;
	
	return 0;
}
