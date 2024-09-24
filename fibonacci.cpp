#include<iostream>
using namespace std;
void fibonacci(int n1,int n2,int n)
{
	if(n==0)
	return;
	cout<<n1<<" ";
	int temp = n1;
	n1=n2;
	n2=temp+n2;
	fibonacci( n1,n2,n--);
}
int main()
{
	int n1=0;
	int n2=1;
	int n;
	cin>>n;
	fibonacci(n1,n2,n);
}
