#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m[1] = "shani";
	m[2] = "yadav";
	m[3] = "B tech";
	m[13] = "unnao";
	m[4] = "Section A4";
	
	m.insert({5,"kanpur"});
	
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
//	cout<<"Finding 13 : "<<m.count(13);
//	cout<<"Finding -13 : "<<m.count(-13);
	m.erase(13);
	
	
	for(auto i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	
	
	
	
	
	
}
