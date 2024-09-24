#include<iostream>
using namespace std;
int arraySum(int arr[],int n)
{
   if(n==0)
   return 0;
   if(n==1)
   return arr[0];
   
   int remainingPart = arraySum(arr+1,n-1);
   int sum = arr[0] + remainingPart;
   return sum;
   
}
int main()
{
	int arr[5] = {1,2,3,4,5};
	int size = 5;
    int  ans = arraySum(arr,size);
    cout<<"Sum of array : "<<ans;
}
