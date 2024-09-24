#include<iostream>
using namespace std;
class Papa{
	public:
		void show()
		{
			cout<<"PAPA SHOW"<<endl;
		}
	
};
class Pappu:public Papa{
	public:
		void show()
		{
			cout<<"PAPPU SHOW"<<endl;
		}
};
int main()
{
	Pappu obj;
	obj.show();
}
