#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int arr[10] = {1,4,8,3,10,9,23,11,6,2};
	int n=10;
	vector<int> answer;
	for(int i=0;i<n;i++){
	   bool leader = true;
		for(int j=i;j<n;j++)
		{
			if(arr[j]>arr[i])
			leader =false;
		}
		if(leader)
		answer.push_back(arr[i]);
	}	

for(int i =0;i<answer.size();i++){
	cout<<answer[i]<<endl;
}
}
