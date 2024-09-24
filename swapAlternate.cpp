#include<iostream>
using namespace std;
printArray(int arr[] , int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void swapAlternate(int arr[] , int size)
{
	for(int i = 0 ;i<size;i=i+2)
	{
		if(i+1<size)
		{
			swap(arr[i], arr[i+1]);
		}
	}
		
}

int main()
{
	int even[8] = {2,3,9,7,5,3,4,0};
	int odd[5] = {23,43,53,87,6};
	
	swapAlternate(even,8);
	printArray(even,8);
	cout<<endl;
	swapAlternate(odd,5);
	printArray(odd,5);
	
	return 0;
}
