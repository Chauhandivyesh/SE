#include <iostream>
using namespace std;

class Student{
	public:
		
		int age;
		
		void input(int age)
		{
			this->age=age;
		}
		void display()
		{
			cout<<"Your age :"<<age;
		}
};

int main()
{
	Student s1;
	
	s1.input(25);
	s1.display();
	
	return 0;
}
