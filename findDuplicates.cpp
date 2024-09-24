#include<iostream>
using namespace std;
int findDuplicates(int arr[] , int size){
 int ans = 0;
 for(int i =0;i<size;i++)
 {
 	ans = ans^arr[i];
	 }	
	for(int i = 1;i<size;i++)
	{
		ans = ans^i;
			}
	return ans;
	
	
}
int main()
{
	int arr[8] = {1,2,3,4,5,5,6,7,};
	int result = findDuplicates(arr,8);
	cout<<result<<endl;
}
