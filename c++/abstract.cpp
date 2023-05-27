#include <iostream>
using namespace std;

class RBI{
	public:
		void interest()
		{
			cout<<"We take 6% on loan"<<endl;
		}
};
class SBI : public RBI{
	public:
		void interest()
		{
			cout<<"We take 8% on loan"<<endl;
		}
};
class HDFC : public RBI{
	public:
		void interest()
		{
			cout<<"We take 7% on loan"<<endl;
		}
};
class AXIX : public RBI{
	public:
		void interest()
		{
			cout<<"We take 6% on loan"<<endl;
		}
};

int main()
{
	SBI o1;
	HDFC o2;
	AXIX o3;
	
	o1.interest();
	o2.interest();
	o3.interest();
	
	return 0;
}

