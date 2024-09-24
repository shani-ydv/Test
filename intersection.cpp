#include<iostream>
#include<vector>
using namespace std;
void interSection(int arr1[] ,int arr2[] , int n ,int m)
{
 int i=0,j=0;
 
 while(i<n && j<m)
 {
 	if(arr1[i]==arr2[j])
 	{
 		cout<<arr1[i]<<" ";
 		i++;
 		j++;
	 }
	 else if(arr1[i]<arr2[j])
	 {
	 	i++;
	 }
	 else
	 j++;
	 
	 }	
	
	
	
}
int main()
{
	int arr1[5] = {1,2,3,4,5};
	int arr2[6] = {6,7,8,9,5,8};
  interSection(arr1, arr2,5,6);
	
}
