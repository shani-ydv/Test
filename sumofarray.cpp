#include<iostream>
using namespace std;
void arraySum(int arr[] , int n){
	int sum=0;
	for(int i =0;i<n;i++)
	{
		sum+=arr[i];
		}
	cout<<"Sum of array = "<<sum<<endl;
	
}



int main()
{
	int arr[5] = {1,2,3,4,5};
	arraySum(arr, 5);
}
