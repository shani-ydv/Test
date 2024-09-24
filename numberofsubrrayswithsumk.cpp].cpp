#include<iostream>
using namespace std;

int main()
{
	
	int arr[10] = {1,2,3,-3,1,1,1,4,2,-3};
	int n=10;
	int k=3;
	int count=0;
	for(int i=0;i<n;i++)
	{
		int num = arr[i];
		for(int j=i;j<n;j++)
		{
		  if(num+arr[j]==k)
		  count++;
		}
	}
	cout<<count<<endl;
}
