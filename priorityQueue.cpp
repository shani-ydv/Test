#include<iostream>
#include<queue>
using namespace std;
int main()
{
	
	
	priority_queue<int> maxi;
	
	priority_queue<int,vector<int> , greater<int> >mini;
	maxi.push(1);
	maxi.push(0);
	maxi.push(3);
	maxi.push(2);
	cout<<"Maximum : "<<maxi.top()<<endl;
	int n = maxi.size();
	for(int i = 0 ;i<n;i++){
		cout<<maxi.top()<<" ";
		maxi.pop();
	}cout<<endl;
	
	mini.push(5);
	mini.push(3);
	mini.push(1);
	mini.push(4);
	mini.push(0);
	cout<<"Minimun : "<<mini.top()<<endl;
	int m = mini.size();
	for(int i =0;i<m;i++){
		cout<<mini.top()<<" ";
		mini.pop();
	}cout<<endl;
	cout<<"Empty : "<<mini.empty();
	
	
	
}
