#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string> s;
	s.push("shani");
	s.push("yadav");
	s.push("Kumar");
	
	cout<<"Top elemnt : "<<s.top()<<endl;
	
	s.pop();
	
	cout<<"Top elemnt : "<<s.top()<<endl;
	
	cout<<"Size of stack : "<<s.size()<<endl;
	
}
