#include<iostream>
using namespace std;
bool issorted(int arr[],int n)
{
	if(n==0 || n==1)
	return true;
	if(arr[0]>arr[1])
	return false;
	else{
	bool rempart = issorted(arr+1,n-1);
	return rempart;
    }
	
}
int main()
{
	int arr[5] = {1,2,3,3,3};
	int size = 5;
	
	bool ans = issorted(arr,size);
	if(ans)
	cout<<"Array is sorted"<<endl;
	else
	cout<<"Array is not sorted"<<endl;
}
