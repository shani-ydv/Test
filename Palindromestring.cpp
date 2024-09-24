#include<iostream>
#include<vector>
using namespace std;
int getLength(char name[]){
	int count=0;
	for(int i =0;name[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
bool isPalindrome(char name[],int n ){
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		for(int i =0;i<n;i++)
		{
			if(name[s]!=name[e])
			return 0;
			else{
			s++;
			e--;}
		}
		return 1;
	}
	
}
int main()
{
	char str[10];
	cin>>str;
    int len =getLength(str);	
	if(isPalindrome(str,len))
	{
		cout<<"Palindrome";
	}
	else
	  cout<<"Not palindrome";
	}	

