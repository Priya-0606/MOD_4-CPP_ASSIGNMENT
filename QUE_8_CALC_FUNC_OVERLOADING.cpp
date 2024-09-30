/*8. Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number 
using different parameters and Function Overloading*/ 

#include<iostream>
using namespace std;
class Calc
{
	int n1,n2,Res;
	double num1;
	public:
	void Result()
	{
		cout<<"\n\n\t Enter Num 1 : ";
		cin>>n1;
		cout<<"\n\n\t Enter Num 2 : ";
		cin>>n2;
		Res=n1+n2;
		cout<<"\n\n\t addition is "<<Res;
	}
	void Result(int no1,int no2)
	{
		n1=no1;
		n2=no2;
		Res=n1-n2;
		cout<<"\n\n\t subtraction is : "<<Res;
	}
	void Result(double no1,double no2)
	{
		n1=no1;
		n2=no2;
		Res=n1*n2;
		cout<<"\n\n\t multiplication is : "<<Res;
	}
	void Result(double no1,int no2)
	{
		
		n1=no1;
		n2=no2;
		Res=n1/n2;
		cout<<"\n\n\t division is : "<<Res;
	}
};
int main()
{
	Calc C;
	int choice;
	int n1,n2;
	double no1,no2;
	cout<<"\n\n\t----------------Operation Menu------------------------";
	
	cout<<"\n\n\t\t------ 1 for Addition -------------";
	cout<<"\n\n\t\t------ 2 for Substraction ---------";
	cout<<"\n\n\t\t------ 3 for Multiplication -------";
	cout<<"\n\n\t\t------ 4 for Division -------------";
	
	cout<<"\n\n\t Enter your Choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			C.Result();
			break;
		case 2:
                cout<<"\n\n\t Enter Num 1 : ";
				cin>>n1;
				cout<<"\n\n\t Enter Num 2 : ";
				cin>>n2;
				C.Result(n1,n2);
				break;
		case 3:
				cout<<"\n\n\t Enter Num 1 : ";
				cin>>no1;
				cout<<"\n\n\t Enter Num 2 : ";
				cin>>no2;
				C.Result(no1,no2);
				break;
		case 4:
				cout<<"\n\n\t Enter Num 1 : ";
				cin>>n1;
				cout<<"\n\n\t Enter Num 2 : ";
				cin>>n2;
				C.Result(no1,n2);
				break;		
		default:
				cout<<"\n\n\t invalid ";		
	}
	
	return 0;
}
