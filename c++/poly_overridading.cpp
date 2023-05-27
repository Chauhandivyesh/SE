#include <iostream>
using namespace std;

class Bird{
	public:
		void Swim(int hr)
		{
			cout<<"Bird van fly upto"<<hr<<"hours"<<endl;
		}
};
class Duck: public Bird{
	public:
		void Swim(int h1)
		{
			cout<<"Duck1 can swim upto"<<h1<<"hours"<<endl;
		}
};

int main()
{
	Duck d1;
	
	d1.Bird::Swim(32);
	d1.Swim(2);
	
	return 0;
}
