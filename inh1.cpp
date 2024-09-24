#include<iostream>
using namespace std; 
class A{
	public:
		void show(){
			cout<<"This is class A"<<endl;
		}
		
};
class B{
	protected:
		void display(){
			cout<<"This is class B"<<endl;
		}
		
};
class C : public A,private B{
	public:
		void print(){
			display();
			cout<<"This is class C"<<endl;
		}	
};
int main()
{ 
 C ob;
 ob.print();
 ob.display();
 ob.show();	
}
