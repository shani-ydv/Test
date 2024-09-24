#include<iostream>
using namespace std;
class vehicle{
	public:
		string brand = "TATA";
		void honk()
		{
			cout<<"Pum Pum"<<endl;
		}
};
class car:public vehicle{
	public:
	string mode1 ="Harrier";	
};
int main()
{
	car obj;
	obj.honk();
	cout<<obj.brand+" "+obj.mode1<<endl;
}
