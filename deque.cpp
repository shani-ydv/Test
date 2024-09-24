#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> d;
	
	d.push_back(1);
	d.push_front(2);
//	for(int i :d){
//		cout<<i<<" ";
//	}	
	d.push_front(3);
	d.push_back(4);
	for(int i:d){
		cout<<i<<" ";
	}cout<<endl;
	
//	d.pop_back();
//	for(int i:d){
//		cout<<i<<" ";
//	}
	
//	d.pop_front();
//	for(int i:d){
//		cout<<i<<" ";
//	}
	
	cout<<"Print first index elemnet : "<<d.at(0)<<endl;
	
	cout<<"First element :  "<<d.front()<<endl;
	cout<<"Back element :  "<<d.back()<<endl;
	
	
	
}

