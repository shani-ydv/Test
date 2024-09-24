#include<iostream>
using namespace std;
void revString(string& s,int i,int j)
{
	if(i>j)
	return;
	swap(s[i],s[j]);
	i++;
	j--;
	revString(s,i,j);	
}
int main()
{
	string s = "SHANI YADAV";
	revString(s,0,s.length()-1);
	cout<<s;
}
