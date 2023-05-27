//polymorphism : operatar overloading using method

#include <iostream>
using namespace std;

class Sample{
	public:
		// class variable
		int a,name;
		
		Sample(int num)
		{
			a=num;
		}
		//passsing object to function
		void add(Sample obj)
		{
			cout<<"multipleaction :"<<a*obj.a;
		}
};

int main()
{
	int name;
	Sample o1(12);
	Sample o2(name);
	
	o1.add(o2);
	
	return 0;
}
