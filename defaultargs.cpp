#include<iostream>
using namespace std;
void print(int arr[],int n,int start=0)
{
	for(int i=start;i<n;i++){
	cout<<arr[i]<<" ";
}
}

int main()
{
	int arr[5] = {1,3,5,7,9};
	int n=5;
	print(arr,n);
	cout<<endl;
	print(arr,n,3);
	
}
