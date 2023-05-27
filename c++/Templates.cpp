#include <iostream>
using namespace std;

template <class T>

T display(T a)
{
	return a;
}
int main()
{
	cout<<"Int return from function :"<<display<int>(12)<<endl;
	cout<<"Float return from function :"<<display<float>(23.3)<<endl;
	cout<<"Char return from function :"<<display<char>('r')<<endl;
	
	return 0;
}
