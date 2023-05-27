// array : array within a class

#include<iostream>
using namespace std;

class Student
{
	public:
		int id,m[3];
		char name[20];
		
		//setter method
		void input()
		{
			cout<<"Enter id :";
			cin>>id;
			
			cout<<"Enter name :";
			cin>>name;
			
			for(int i=0;i<3;i++)
			{
				cout<<"Enter marks of subject"<<i<<" :";
				cin>>m[i];
			}
		}
		//getter method
		void display()
		{
			cout<<"\n\n----------Your Info---------\n\n";
			cout<<"id :"<<id<<endl;
			cout<<"name :"<<name<<endl;
			for(int i=0;i<3;i++)
			{
				cout<<"Marks of subject"<<i<<" :"<<m[i]<<endl;
			}
		}
};

int main()
{
	Student s;
	
	s.input();
	s.display();
	
	return 0;
}
