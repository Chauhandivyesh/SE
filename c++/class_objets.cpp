#include<iostream>
using namespace std;

class Student
{
	//acess modifier
	public:
		//class variable
		float per;
		int m1,m2,m3;
		
		//class method/ function
		
		//setter
		void input(int s1,int s2, int s3)
		{
			m1=s1;
			m2=s2;
			m3=s3;
		}
		
		//getter
		void displey()
		{
			per=((m1+m2+m3)*100)/300;
			cout<<"Ave :"<<per;
		}
};
int main()
{
	student s;
	s.input(34,54,56);
	s.display();
	
	return 0;
}
