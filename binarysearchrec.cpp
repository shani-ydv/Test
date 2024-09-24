#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
	for(int i=s;i<=e;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	
	
}
bool binarySearch(int *arr,int s,int e,int k){
	print(arr,s,e);
	if(s>e)
	return false;
	
	int mid = s+(e-s)/2;
	cout<<"value of arr mid : "<<arr[mid]<<endl;
	
	if(arr[mid]==k)
	return true;
	
	
	if(arr[mid]<k)
	{
		return binarySearch(arr,mid+1,e,k);
	}
	else
	{
		return binarySearch(arr,s,mid-1,k);
	}
	return false;
}
int main()
{
	int arr[6] = {1,4,3,7,5,8};
	int key = 8;
	int size=6;
	
	bool ans = binarySearch(arr,0,5,key);
	if(ans)
	cout<<"Present";
	else
	cout<<"Absent";
}
