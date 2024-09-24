#include<iostream>
using namespace std;
class A{
	public:
		void fun(){
			cout<<"Inside Function 1"<<endl;
		}
};
class B{
	public:
		void fun(){
			cout<<"Inside Function 2"<<endl;
		}
};
class C:public A,public B{
};
int main()
{
	C ob;
	ob.A::fun();
	ob.B ::fun();
}
