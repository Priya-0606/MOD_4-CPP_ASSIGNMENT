//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;
class Arith
{
	int N1, N2;
	 
	public : 
	
		   	 Arith()
		   	 {
		   	 	N1 = 15;
		   	 	N2 = 5;
             }    
             
             void Addition()
             {
             	cout<<"\n\n\t Addition : "<<N1+N2;
			 }
			 void Substraction()
             {
             	cout<<"\n\n\t Substraction : "<<N1-N2;
			 }
			 void Multiplication()
             {
             	cout<<"\n\n\t Multiplication : "<<N1*N2;
			 }
			 void Division()
             {
             	cout<<"\n\n\t Division : "<<N1/N2;
			 }
};

main()
{
	Arith A;
	
	A.Addition();
	A.Substraction();
	A.Multiplication();
	A.Division();
}
