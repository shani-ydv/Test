#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    cout<<"Front of Queue : "<<q.front()<<endl;
    q.push(20);
    cout<<"Front of Queue : "<<q.front()<<endl;
    q.push(37);
    cout<<"Front of Queue : "<<q.front()<<endl;
    q.pop();
    q.pop();
    q.pop();
    q.push(24);
    q.push(54);
    q.push(64);
    cout<<"Rear of Queue : "<<q.back()<<endl;
    cout<<"Size of Queue : "<<q.size()<<endl;
    if(q.empty())
    {
    	cout<<"Queue is empty"<<endl;
	}
	else
	cout<<"Queue is not empty"<<endl;
	cout<<"Size of queue : "<<q.size()<<endl;
}
	    

