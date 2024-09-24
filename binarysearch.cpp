#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size , int key)
{
	int start = 0;
	int end = size-1;
	int mid = start+(end-start)/2;
	 while(start<=end)
	 {
	 	if(arr[mid]==key)
	 	return mid;
	    if(key>arr[mid]){
	    	start = mid + 1;
		}
	 	else
	 	{
	 		end = mid-1;
		 }
	 	mid = start + (end-start)/2;
	 }
	return -1;
	
}
int main()
{
	int even[10] = {1,2,3,4,5,6,7,8,9,10};
	int odd[9] = {1,2,3,4,5,6,7,8,9};
	int result = binarySearch(even,10,4);
	int index = binarySearch(odd,9,9);
	cout<<"Index of 4 is "<<result<<endl;
	cout<<"Index of 9 is "<<index<<endl; 	
}
