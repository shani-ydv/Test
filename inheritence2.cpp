#include<iostream>
using namespace std;
class A{
	public:
		void funA()
		{
			cout<<"Function A"<<endl;
		}
};
class B : public A{
	public:
		void funB()
		{
			cout<<"Function B"<<endl;
		}
};
class C :public B{
	public:
};
int main()
{
	C c;
	c.funA();
	c.funB();
}
