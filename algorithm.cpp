#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	
	cout<<"Finding 5 : "<<binary_search(v.begin(),v.end(),5)<<endl;
	
	int a = 3;
	int b = 5;
	
	cout<<"Max : "<<max(a,b)<<endl;
	cout<<"Min : "<<min(a,b)<<endl;
	
	
	string s = "Geeks for Geeks";
	reverse(s.begin(),s.end());
	cout<<"Reverse : "<<s<<endl;
	
	rotate(s.begin(),s.begin()+1,)	
}
