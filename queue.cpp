#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<string> q;
	
	q.push("shani");
	q.push("kumar");
	q.push("yadav");
	cout<<"Size "<<q.size()<<endl;
	cout<<"First Element : "<<q.front()<<endl; 
	q.pop();
	cout<<"Size "<<q.size()<<endl;
	cout<<"First Element : "<<q.front()<<endl; 
	q.push("Indian");
	cout<<"Size "<<q.size()<<endl;

}

