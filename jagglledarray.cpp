#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int c[][];
	c = new [3][];
	c[0] = new int[5];
	c[1] = new int[3];
	c[2] = new int[2];
	for(int i=0;i<3;i++)
	{
		cin>>c[i];
	 } 
	 for(int i=0;i<3;i++)
	{
		cout<<c[i]<<" ";
	 } 
	
	
}
