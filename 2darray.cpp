#include<iostream>
using namespace std;

 bool isPresent(int arr[][4],int key,int n, int m)
 { 
    for(int i =0;i<n;i++)
	{
		for(int j =0;j<m;j++){
			if(arr[j][i]==key)
			return 1;
		}
	}
 	return 0;
 }
 void printSum(int arr[][4],int n,int m)
 {
 	for(int i=0;i<n;i++){
 		int sum=0;
 		for(int j=0;j<m;j++){
 			sum=sum+arr[i][j];
		 }
		 cout<<sum;
		 cout<<endl;
	 }	
 }
 // printing column sum
//  void printColSum(int arr[][4],int n,int m)
// {
// 	for(int i=0;i<m;i++){
// 		int sum=0;
// 		for(int j=0;j<n;j++){
// 			sum=sum+arr[j][i];
//		 }
//		 cout<<sum;
//		 cout<<endl;
//	 }	
// }
 
 int largestRowSum(int arr[][4],int n,int m){
 	int maxi = INT_MIN;
 	int rowIndex;
 	for(int i=0;i<n;i++){
 		int sum=0;
 		for(int j=0;j<m;j++){
 			sum=sum+arr[i][j];
		 }
 	 if(maxi<sum){
 	 	maxi = sum;
 	 	rowIndex = i;
	  }
}
 	cout<<"Maximum sum is "<<maxi<<endl;
 
 return rowIndex;
 }
 
int main()
{
	int arr[3][4];
	for(int i =0;i<4;i++)
	{
		for(int j =0;j<3;j++){
			cin>>arr[j][i];
		}
	}
//	printing array
    for(int i =0;i<3;i++)
	{
		for(int j =0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	int key;
	cout<<"Enter number to be searched"<<endl;
	cin>>key;
	if(isPresent(arr,key,3,4))
	{
		cout<<"Element Found"<<endl;
	}
	else
	{
		cout<<"Not found"<<endl;
     }
    printSum(arr,3,4);
//	printColSum(arr,3,4);
	int ans = largestRowSum(arr,3,4);
	cout<<"Maximum sum is at row index : "<<ans;
}
