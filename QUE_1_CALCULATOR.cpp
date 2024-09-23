//1. WAP to create simple calculator using class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Calc
{
	int Num_1, Num_2;
	
	public :
	
			void get_num1()
				{
					cout<<"\n\n\n\t\t Input any integer number - 1 : ";
					cin>>Num_1;
				}
			void get_num2()
				{
					cout<<"\n\n\n\t\t Input any integer number - 2 : ";
					cin>>Num_2;
				}
			void Print_num()
				{
					cout<<"\n\n\t\t Number 1 : "<<Num_1<<"\n\n\t\t Numer 2 : "<<Num_2;
				}
			void addition()
				{
					cout<<"\n\n\t Addition = "<< Num_1 + Num_2;
				}
				
			void substraction()
				{
					cout<<"\n\n\t Subtraction = "<< Num_1 - Num_2;
				}
			void multiplication()
				{
					cout<<"\n\n\t Multiplication = "<< Num_1 * Num_2;
				}
				
			void division()
				{
					cout<<"\n\n\t Division = "<< Num_1 / Num_2;
				}
				
};

main()
{
	Calc C;
	cout<<"\n\n\t--------------------------------*--------------------------------";
	C.get_num1();
	C.get_num2();
	
	int Choice;
	cout<<"\n\n\t---------------------*-----------------------\n\n";
	cout<<"\n\n\t\t\t 1. Addition";
	cout<<"\n\n\t\t\t 2. Subtraction ";
	cout<<"\n\n\t\t\t 3. Multiplication";
	cout<<"\n\n\t\t\t 4. Division";
	cout<<"\n\n\t\t\t 5. Exit"; 
	cout<<"\n\n\t---------------------*-----------------------\n\n";
	
	cout<<"\n\n\t Enter a choice for calculation : ";
	cin>>Choice;
	
	switch(Choice)
	{
		case 1 : C.addition();
					break;
		case 2 : C.substraction();
					break;
		case 3 : C.multiplication();
					break;
		case 4 : C.division();
					break;
		case 5 : exit(0);
					break;
		default : printf("\n\n\n\tInvalid Choice !!! Try Again.....");
					break;
	}

	cout<<"\n\n\t---------------------*-----------------------\n\n";
}




