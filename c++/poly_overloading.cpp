//polymorphism : method Overloading   

#include <iostream>
using namespace std;

class Duck{
	public:
		void Swim(int h1)
		{
			cout<<"Duck can swim upto"<<h1<<"hours"<<endl;
		}
		void Swim(int h1,int h2)
		{
			cout<<"Duck1 can swim upto"<<h1<<"hours"<<endl;
			cout<<"Duck2 can swim upto"<<h2<<"hours"<<endl;
		}
};

int main()
{
	Duck d1;
	
	d1.Swim(2);
	d1.Swim(3,4);
	
	return 0;
}
