#include<iostream>
using namespace std;
void sort(int *arr,int n)
{
	if(n==0 || n==1)
	return;
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
	}
	sort(arr,n-1);
	
}
int main()
{
	int arr[5] ={2,4,1,5,7};
	int n=5;
	sort(arr,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
