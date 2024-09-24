#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {2,1,3,6,8,4,7,9};
    int n =8;
    for(int i=0;i<n;i++){
   int temp =arr[i];
   int j = i-1;
   for(;j<=0;j--)
   {
    if(arr[j]>temp)
    {
        arr[j+1] = arr[j];
    }
    else
    {
        break;
    }
   }
   arr[j+1] = temp;
 }
 
 for (int  i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }

}
