#include<iostream>
using namespace std;
gcd(int a,int b)
{
	if(a==0)
	return b;
	if(b==0)
	return a;
	while(a!=b)
	{
		if(a>b)
        a=a-b;
		else
		b=b-a;	
	}
	return a;
}
int main()
{
	int a;
	int b;
	cin>>a>>b;
	int ans = gcd(a,b);
	cout<<"The GCD of "<<a<< " & "<<b<<" is "<<ans;
}
