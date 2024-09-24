#include<iostream>
using namespace std;
int firstOcc(int arr[],int size, int key){
	int s = 0;
	int e=size-1;
	int m=s+(e-s)/2;
	int ans = -1;
	while(s<=e){
	 if(arr[m]==key){
	 	ans = m;
	 	e = m-1;
		 }	
	else if(key>arr[m]){
		s=m+1;
	}
	else if(key<arr[m]){
		e=m-1;
	}
	m=s+(e-s)/2;
		}
	return ans;	
}
int lastOcc(int arr[],int size, int key){
	int s = 0;
	int e=size-1;
	int m=s+(e-s)/2;
	int ans = -1;
	while(s<=e){
	 if(arr[m]==key){
	 	ans = m;
	 	s = m+1;
		 }	
	else if(key > arr[m]){
		s=m+1;
	}
	else if(key < arr[m]){
		e=m-1;
	}
	m=s+(e-s)/2;
		}
	return ans;	
}

int main()
{
 int arr[9] = {1,2,3,3,3,3,3,3,5};
 cout<<"First occurence of 3 is at index : "<<firstOcc(arr,9,3)<<endl;
 cout<<"Laast occurence of 3 is at index : "<<lastOcc(arr,9,3)<<endl;
 return 0;
}
