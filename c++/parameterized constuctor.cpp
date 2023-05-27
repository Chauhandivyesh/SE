#include <iostream>
using namespace std;

// class creation
class Travel
{
	public:
		int age;
		string n1,n2;
		
		//default constructor
		Travel()
		{
			cout<<"constructor call...."<<endl;	
		}	
	
	//parameterized constructor
	Travel(int yrs,string name,string city)
	{
		age=yrs;
		n1=name;
		n2=city;
	}
	
	void display()
	{
		cout<<endl<<"age :"<<age<<endl;
		cout<<"name :"<<n1<<endl;
		cout<<"city :"<<n2;
	}
};

int main()
{
	Travel T1;
	Travel T2(12,"abs","abd");//to call parameterized constroctor
	
	T1.display();
	T2.display();
	
	return 0;
}
