#include<iostream>
using namespace std;
//int power(int n)
//{
//	if(n==0)
//	return 1;
//    return 2 * power(n-1);
//}
//int factorial(int n)
//{
//	if(n==0)
//	return 1;
//    
//	return n*factorial(n-1);
//}
void count1(int n)       //Non tail recursion or head recursion
{
	if(n==0)
	return ;
	
	count1(n-1);
	cout<<n<<" ";
}
void count2(int n)       // tail recursion 
{
	if(n==0)
	return ;
	
	cout<<n<<" ";
	count2(n-1);
}
int main()
{
	int n;
	cin>>n;
//	cout<<factorial(n)<<endl;
//    cout<<power(n);
   count1(n);
   count2(n);
}
