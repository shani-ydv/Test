#include<iostream>
#include<vector>
using namespace std;
sortedMerge(int arr1[],int n,int arr2[],int m,int arr3[])
{
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j])
		{
			arr3[k++] = arr1[i++];
	
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
		while(i<n)
		{
			arr3[k++] = arr1[i++]; 
		}
		while(j<m)
		{
			arr3[k++] = arr2[j++]; 
		}
			
}
void print(int arr[] , int size)
{
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}


int main()
{
	int arr1[5] = {1,3,4,6,8};
	int arr2[6] = {2,5,7,9,12,15};
	int arr3[11] ={0};
	
	sortedMerge(arr1,5,arr2,6,arr3);
	
	print(arr3,11);
	
	
	
}
