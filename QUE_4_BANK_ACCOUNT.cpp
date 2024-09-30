/*4. Write a C++ program to implement a class called Bank Account that has private member variables for account 
number and balance. Include member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class Bank_Account
{
	string D_name;
	int Ac_no;
	int Bal;
	
	public :
			void get_Depositor();
			void Display();
			void Deposit();	
			void Withdraw();		
};

void Bank_Account :: get_Depositor()
{
	cout<<"\n\n\t Input Name of the Depositor : ";
	cin>>D_name;
				
	cout<<"\n\n\t Input Account Number : ";
	cin>>Ac_no;
							
	cout<<"\n\n\t Input a total balance in Account : ";
	cin>>Bal;
}
void Bank_Account :: Display()
{
	cout<<"\n\n\t Name of the Depositor : "<<D_name;
	cout<<"\n\n\t Account Number : "<<Ac_no;
	cout<<"\n\n\t Balance amount : "<<Bal;
}
void Bank_Account :: Deposit()
{
int D;
				
	cout<<"\n\n\n\t Enter an Amount to Deposit : ";
	cin>>D;
				
	Bal += D;
}
void Bank_Account :: Withdraw()
{
	int Amount;
	
	cout<<"\n\n\t Enter Amount to withdraw : ";
	cin>>Amount;
	
	if(Bal>Amount)
		Bal -= Amount;					
	else
		cout<<"\n\n\n\t Balance is not enough for withdwawl amount : ";

}
main()
{
	Bank_Account B;
	cout<<"\n\n\t--------------------------------*--------------------------------";
	
	B.get_Depositor();
	B.Display();
	
	cout<<"\n\n\t--------------------------------*--------------------------------";
	
	cout<<"\n\n\t 1. Deposit";
	cout<<"\n\n\t 2. Withdraw";
	
	int Choice;
	cout<<"\n\n\t---------------------*-----------------------\n\n";
	
	cout<<"\n\n\t Choose what would you like to do : ";
	cin>>Choice;
	
	switch(Choice)
	{
		case 1 : B.Deposit();
					break;
		case 2 : B.Withdraw();
					break;
		default : cout<<"\n\n\t Invalid choice !!!!!";
					break;
	}
	
	cout<<"\n\n\t---------------------*-----------------------\n\n";
	
	B.Display();
	
	cout<<"\n\n\t--------------------------------*--------------------------------";
	
}







