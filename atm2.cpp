#include<iostream>
using namespace std;
class ATM{
	private:
		long long int accNum , balance;
	public:
		
		ATM(long long int accNum, long long int balance)
		{
			
		}
		int deposit()
		{
			int amt;
			cout<<"Enter amount to be deposited"<<endl;
			cin>>amt;
			balance = balance + amt;
		}
		int withdraw()
		{
			int amt;
			cout<<"Enter amount to be deposited"<<endl;
			cin>>amt;
			balance =  balance - amt;
		}
		int Balance()
		{
			cout<<"Your current balance is : "<<balance<<endl;
		}
			
};
int main()
{
	long long int accNum = 213244334;
	int balance = 200000;
	ATM obj(accNum,balance);
	int  i;
	cout<<"Enter your choice\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit"<<endl;
	cin>>i;
	while(i>5 && i!=4)
	{
		switch(i)
		{
			case 1:
				obj.deposit();
				obj.Balance(); break;
			case 2:
				obj.withdraw();
				obj.Balance(); break;
			case 3:
				obj.Balance(); break;
			default:
				cout<<"Enter valid choice"<<endl;
			
		}
		
		
		
		
		
	}
	
}
