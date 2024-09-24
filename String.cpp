#include<iostream>
using namespace std;
int getLength(char name[]){
	int count=0;
	for(int i =0;name[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
void reverse(char name[],int n){
	int s=0;
	int e=n-1;
	while(s<e)
	{
		swap(name[s++],name[e--]);
	}
}

int main()
{
	char name[10];
	cout<<"Enter your name"<<endl;
	cin>>name;
	
	cout<<"Your name is ";
	cout<<name;
	cout<<endl;
	int len = getLength(name);
    cout<<"Length : "<<len<<endl;
    reverse(name,len);
    cout<<"Your name is ";
	cout<<name;
}
