#include <iostream>
using namespace std;

class Common{
	public:
		string name;
		string address;
		long int contact;
		
		Common(string name,string address,long int contact)
		{
			this->name=name;
			this->address=address;
			this->contact=contact;
		}
};

class Seller{
	public:
		char div;
		int id;
		Common *C;
		//here *c is pointer_object
		//to crete reference of common class
		
		Seller(char div,int id,Common *C)
		{
			this->div=div;
			this->id=id;
			this->C=C;
		}
		void display()
		{
			cout<<"\n\n============seller info=============\n\n";
			cout<<"Seller id :"<<id<<endl;
			cout<<"Seller div :"<<div<<endl;
			cout<<"Name :"<<C->name<<endl;
			cout<<"Address :"<<C->address<<endl;
			cout<<"Contact :"<<C->contact<<endl;
		}
};

int main()
{
	Common C("jatin","ahmedabad",5124564556);
	Seller S ('A',90,&C);
	
	S.display();
	
	return 0;
}
