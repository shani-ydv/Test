#include<iostream>
using namespace std;
class A{
	
	int health;
	char level;
	public:
	A(int x,char c)
	{
		this->health=x;
		this->level=c;
	}
	void print()
	{
		cout<<"Health : "<<health<<endl;
		cout<<"Level  : "<<level<<endl;
	}

	A(A &temp)
	{ 
	cout<<"copy"<<endl;
		this->health=temp.health;
		this->level=temp.level;
	}
		
		
		
		
		
		
		
		
		
//	A(int health){
//			cout<<"This : "<<this<<endl;
//			this->health=health;
//			cout<<"Constructor is fired"<<endl;
//		}	
		
		
//	int  getHealth(){
//		return health;
//	}
//	char getLevel(){
//		return level;
//	}
//	
//	void  setHealth(int h)
//	{
//		health=h;
//	}
//	void setLevel(char c)
//	{
//		level = c;
//	}
//	void show()
//	{
//		cout<<"Show method is called"<<endl;
//	}
//	
};
int main()
{
	A S(20,'A');
	S.print();
	
	A R(S);
	R.print();
//	
	
	
	
	
	
	
	
	
	
//	A ob1;
//    ob1.setHealth(10);
//    ob1.setLevel('A');
//	cout<<"Health : "<<ob1.getHealth()<<endl;
//	cout<<"Level : "<<ob1.getLevel();

//     A shani(20);
////	cout<<"Adress of shani : "<<&shani<<endl; 
	
//	b->setHealth(30);
//	b->setLevel('C');
//	cout<<"Health : "<<b->getHealth()<<endl;
//	cout<<"Level : "<<b->getLevel();
//	cout<<endl;
//	cout<<"Health : "<<(*b).getHealth()<<endl;
//	cout<<"Level : "<<(*b).getLevel();
	
	
	
	
}
