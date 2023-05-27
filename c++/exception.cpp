#include<iostream>
using namespace std;

class Bird
{
	// class member
    public:
    // class varivable
    int a=23;
};
int main()
{
	Bird b;
	
	// . : membership operator
	
	cout<<"value : "<<b.a;
	
	return 0;
}
