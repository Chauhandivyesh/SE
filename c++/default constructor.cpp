//Destructor :
#include <iostream>
using namespace std;
class sample
{
	public:
		sample()
		{
			cout<<"constructor call";
		}	
		sample(int a)
		{
			cout<<"value a="<<a<<endl;
		}
		~sample()
		{
			cout<<"destructor call"<<endl;
		}
		void display()
		{
			cout<<"normal :"<<endl;
		}
};

int main()
{
	sample obj1;
	sample obj2(25);
	obj1.display();
	obj2.display();
	
	return 0;	
}
