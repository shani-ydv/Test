//ADDING  TWO ARRAYS

#include<iostream>
#include<vector>
using namespace std;
vector<int> addArray(vector<int> &v1 , int n, vector<int> &v2,int m){
	int i = n-1;
	int j =m-1;
	int carry = 0;
	vector<int> ans;
	while(i>=0 && j>=0)
	{
		int val1 = v1[i];
		int val2 = v2[j];
		int sum = val1+ val2 + carry;
		
		int carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
		i--;
		j--;
	}
	while(i>=0)
	{
		int sum =  v1[i]  + carry;
		int carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
		i--;
	}
		while(j>=0)
	{
		int sum =  v2[j]  + carry;
		int carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
		j--;
	}
	while(carry!=0)
	{
		int sum = v1[i] + carry;
		int carry = sum/10;
		sum = sum %10;
		ans.push_back(sum);
	}
	
	return ans;
}
int main()
{
	vector<int> v1(5);
	vector<int> v2(3);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	for(int i =0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}cout<<endl;
//	for(int i =0;i<3;i++)
//	{
//		cout<<v2[i]<<" ";
//	}cout<<endl;
	
//	vector<int> res = addArray(v1,5,v2,3);
//	for(int i =0;i<res.size();i++)
//	{
//		cout<<res[i]<<" ";
//	}
//	
}
