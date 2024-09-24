#include<iostream>
using namespace std;
void print(int arr[],int n)
{
	cout<<"Size of array is : "<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
	
}
bool linearSearch(int arr[],int key,int size)
{
	print(arr,size);
	if(size==0)
	return false;
	if(arr[0]==key)
	return true;
	else{
	bool remPart = linearSearch(arr+1,key,size-1);
	return remPart;
}
		
}
int main()
{
	int arr[6] = {2,5,3,7,8,9};
	int key = 3;
	int size = 6;
	
	bool index = linearSearch(arr,key,size);
	if(index)
	{
		cout<<"Element is present in the array";
	}
	else
	cout<<"Element is not present int the array";
}
