#include<iostream>
using namespace std;
int findUnique(int arr[] , int size)
{  
    int ans = 0;
	for(int i=0;i<size;i++){
		ans = ans^arr[i];
	}
	return ans;
	 
	 
 }
int main()
{
	int arr[7] = {2,2,1,1,3,3,4};
	int result = findUnique(arr , 7);
	cout<<""
}
