#include<iostream>
using namespace std; 
class A{
 	
	public:
		void show(){
		
	cout<<"This is class A"<<endl;
}
};
class B : public A{
	public:
		void display()
		{
			cout<<"This is class B";
		}
};
int main()
{
	B obj;
	obj.show();
	obj.display();
	
}
