//12. Write a program to swap the two numbers using friend function without using third variable.

#include<iostream>
using namespace std;

class Swap
{
	int S1, S2;
	
	public :
			void get()
			{
				cout<<"\n\n\t Enter S1 : ";
				cin>>S1;
				cout<<"\n\n\t Enter S2 : ";
				cin>>S2;	
			}	
			
			friend void swapping(Swap);
};

void swapping(Swap S)
{
	cout<<"\n\n\t Before Swapping : ";
	cout<<"\n\n\t S1 = "<<S.S1;
	cout<<"\n\n\t S2 = "<<S.S2;
	
	cout<<"\n\n\t After Swapping : ";
	
	S.S1 = S.S1 + S.S2;
	S.S2 = S.S1 - S.S2;
	S.S1 = S.S1 -	 S.S2;
	cout<<"\n\n\t S1 = "<<S.S1;
	cout<<"\n\n\t S2 = "<<S.S2;
}

main()
{
	Swap S;
	
	S.get();
	swapping(S);
}

