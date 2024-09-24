#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	cout<<"Capacity = "<<v.capacity()<<endl;
	v.push_back(1);
	
	cout<<"Capacity= "<<v.capacity()<<endl;
		v.push_back(2);
		
	cout<<"Capacity = "<<v.capacity()<<endl;
		v.push_back(3);
		
	cout<<"Capacity = "<<v.capacity()<<endl;
		v.push_back(4);
		
	cout<<"Capacity = "<<v.capacity()<<endl;
		v.push_back(5);
		
	cout<<"Capacity = "<<v.capacity()<<endl;
	
	cout<<"size = "<<v.size()<<endl;
	
	cout<<"element at second inedex = "<<v.at(0)<<endl;
	
	cout<<"Front Element = "<<v.front()<<endl;
	
	cout<<"Back Element = "<<v.back()<<endl;
	
	cout<<"Before pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}cout<<endl;
	
	v.pop_back();
	
	cout<<"After pop"<<endl;
	for(int i:v){
		cout<<i<<" ";
	}cout<<endl;
	
	
	vector<int> a(5,1);
		for(int i:a){
		cout<<i<<" ";
	}cout<<endl;
	
	
	vector<int> last(a);
		for(int i:last){
		cout<<i<<" ";
	}cout<<endl;
	
	
	
	
	
}

 
