#include <iostream>
using namespace std;

class ABC{
	public:
		string add(string s1,string s2)
		{		
			return s1+s2;
		}
};
int main()
{
	ABC obj;
	string s1, s2;
			cout<<"Enter first string:";
			cin>>s1;
			cout<<"Enter second string:";
			cin>>s2;
			cout<<obj.add(s1,s2);
	
	
	return 0;
}
