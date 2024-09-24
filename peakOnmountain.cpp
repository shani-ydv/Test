#include<iostream>
using namespace std;
int peakInMountaionarray(int arr[],int size)
{
	int s=0;
	int e=size-1;
	int mid =s+(e-s)/2;
	while(s<e)
	{
		if(arr[mid]<arr[mid+1])
		{
			s=mid+1;
		}
		else
		{
			e=mid;
		}
		mid =s+(e-s)/2;
	
	}
   return arr[e];
}
int main()
{
	int arr[6] = {3,4,8,3,2,1};
	cout<<"Peak element is  : "<<peakInMountaionarray(arr,6);
}
