#include<iostream>
using namespace std;
class Animal{
	public:
		string name;
		int age;
		void set_value()
		{
			cout<<"Enter name: "<<endl;
			cin>>name;
			cout<<"Enter age: "<<endl;
			cin>>age;
		}
	
};
class zebra:public Animal{
	public:
		string org;
		void details(){
		
		set_value();
		
		cout<<"Enter place of origin"<<endl;
		cin>>org;
	}
	void showdetails()
		{
			cout<<"Name of animal : "<<name<<endl;
			cout<<"Age of animal : "<<age<<endl;
			cout<<"Place of origin : "<<org<<endl;
		}
		
};
class dolphin:public Animal{
		public:
			string org;
		void details(){
		
		set_value();
		
		cout<<"Enter place of origin"<<endl;
		cin>>org;
	}
		void showdetails()
		{
			cout<<"Name of animal : "<<name<<endl;
			cout<<"Age of animal : "<<age<<endl;
			cout<<"Place of origin : "<<org<<endl;
		}
	
};
int main()
{
    Animal a;
//	a.set_value();
	zebra z;
	z.details();
	z.showdetails();
	dolphin d;
	d.details();
	d.showdetails();
		
}
