#include <iostream>
using namespace std;

class Sample{
	public:
		
	    string a;
	    
	    Sample(string name)
		{
	    	a=name;
		}
		
		void operator +(Sample obj)
		{
			cout<<"addition :"<<a+obj.a;
		}
	
	
};
int main()
{
	Sample s1("hello");
	Sample s2("word");
	
	s1+s2;
	return 0;
	

}
