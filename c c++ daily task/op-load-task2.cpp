#include <iostream>
using namespace std;

class Sample{
	public:
		int a;
		string str;
		string s;
	
		Sample(int n)
		{
			a=n;
		}
		Sample(string name)
		{
			str=name;
		}
		void operator *(Sample obj) 
		{
			while(a!=0)
			{
				s+=obj.str;
				a--;	
			}
			cout<<"finel string :"<<s;	
		}
};
int main()
{
	Sample s1(10);
	Sample s2("Hello");
	
	s1*s2;
	
	return 0;
}
