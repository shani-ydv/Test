#include<iostream>
using namespace std;
int main()
{
	int num = 5;
	int *ptr = &num;
//	cout<<"address is "<<ptr<<endl;
//	cout<<"value is "<<*ptr<<endl;
//	 
//	 double d=3.4;
//	 double *p2 = &d;
//	cout<<"address is "<<p2<<endl;
//	cout<<"value is "<<*p2<<endl;
//	cout<<"Size of num is "<<sizeof(num)<<endl;
//	cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
//	
//	cout<<"Size of double  is "<<sizeof(d)<<endl;
//	cout<<"Size of pointer is "<<sizeof(p2)<<endl;
//	
//  cout<<"before"<<endl;
//  cout<<*ptr<<endl;
//  (*ptr)++;
//  cout<<"After"<<endl;
//  cout<<*ptr<<endl;	
//   
//  int *q=ptr;
//  cout<<ptr<<" - "<<*ptr<<endl;
//  cout<<q<<" - "<<*q<<endl;
  int i =3;
  int *p=&i;
  cout<<"before : "<<p<<endl;
  p=p+1;
  cout<<"after : "<<p<<endl;
  
  
  
  
}
