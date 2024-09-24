#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &v,int key){
	vector<int> temp(v.size());
	for(int i=0;i<v.size();i++){
		temp[(i+key)%4] = v[i];
	}
	v =temp;
	
	for(int i =0;i<4;i++)
	{
		cout<<v[i]<<" ";
		}
}
int main()
{
	vector<int> v(4);
	v.push_back(11);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	int key = 2;
	
	rotate(v,key);	
}
