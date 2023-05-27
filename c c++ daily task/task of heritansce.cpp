#include <iostream>
using namespace std;

class Tour{
	public:
		void input()
		{
			
			cout<<"\n--------------WEl COME TOPS TOUR AND TRAVELS-------------\n";
			
			cout<<"1.ahmedabad"<<endl;
			cout<<"2.dhandhuka"<<endl;
			cout<<"3.botad"<<endl;
			cout<<"4.jilila"<<endl;
			cout<<"5.bhavnagar"<<endl;
			cout<<"6.starbajar"<<endl;
			cout<<"7.dariyapur"<<endl;
			cout<<"9.bhuj"<<endl;
			cout<<"10.div"<<endl;		
        }
};

class Register
{
	public:
		string username,email,password,name;
		void input()
		{
			cout<<"\n================================================\n";
			cout<<"\n---------------Registration Process-------------------\n";
			
			cout<<"Enter your username"<<endl;
			cin>>username;
			
			cout<<"Enter your Email"<<endl;
			cin>>email;
			
			cout<<"Enter your password"<<endl;
			cin>>password;
		}
		void display()
		{
			cout<<"Registeration Successfull......"<<endl;
			cout<<endl<<"========================================"<<endl;
			cout<<"\n-------------------Loging From------------------\n"<<endl;
		}
};

class Login
{
	public:
		string username,password;
		void input()
		{
			cout<<"Enter your username :";
			cin>>username;
			
			cout<<"Enter your password :";
			cin>>password;
		}
};


int main()
{
	Tour objT;
	objT.input();
	
	char choice;
	cout<<endl<<"\n Do you want to register ?[y/n] :";
	cin>>choice;
	
	if(choice == 'y')
	{
		Register objR;
		objR.input();
		objR.display();
		
		Login objL;
		objL.input();
		
		if( objR.username == objL.username || objR.password == objL.password)
		{
			cout<<"access available";
		}
		 else
		{
			cout<<endl<<"Thank you";
		}
	}

	

	
	return 0;
}
