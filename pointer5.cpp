#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
   return sum;
}
int main()
{
//    char ch = 'a';
//	cout<<sizeof(ch)<<endl;
//	
//	char *ptr =&ch;
//	cout<<sizeof(*ptr)<<endl;	
//	
//	char *p = new char;
//	cout<<sizeof(p)<<endl;

     int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
     {
	cin>>arr[i];
    }
    int ans  = getsum(arr,n);
    
    cout << " answer is : "<<ans<<endl;







}
