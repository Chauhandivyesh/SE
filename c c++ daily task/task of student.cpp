#include<iostream>
using namespace std;

class Std{
	public:
		string studentname;
		int marks;
		
		void input()
		{
			cout<<"Enter studentname"<<endl;
			cin>>studentname;
			
			cout<<"Enter number of marks";
			cin>>marks;
		}
		void display(){
			cout<<"enter student name"<<studentname<<endl;
			
			cout<<"enter numer of marsk"<<marks<<endl;
		}
};
int main()
{
	Std obj[3];
	float avg;
	
	for(int i=0;i<3;i++)
	{
		obj[i].input();
		avg+=obj[i].marks;
	}
	for(int i=0;i<3;i++)
	{
		obj[i].display();
	}
	cout<<endl<<"Avg restult of std :"<<avg/3;
	
	  
	return 0;
	

}
