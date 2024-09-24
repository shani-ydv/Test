#include<iostream>
using namespace std;
void reachHome(int src,int dstn)
{
    if(src==dstn)
    return;
    cout<<"Source : "<<src<<" "<<"Destination : "<<dstn<<endl;
	reachHome(src=src+1,dstn);		
}
int main()
{
	int src=1;
	int dstn=10;
	
	reachHome(src,dstn);	
}
