//1. Write a program to find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class Multi_cube
{
	int N1, N2;
	
	public : 
 		   	   void get_num()
		   	    {
		   	   		cout<<"\n\n\t Enter Number 1 : ";
		   	   		cin>>N1;
		   	   		cout<<"\n\n\t Enter Number 2 : ";
		   	   		cin>>N2;		   	   		
	            }
	            inline void Multiplication()
				{
					cout<<"\n\n\t Multiplication = "<<N1*N2;
				}
				inline void Cube()
				{
					cout<<"\n\n\t Cube of Number 1 = "<<N1*N1*N1;
				}
				inline void Cube1()
				{
					cout<<"\n\n\t Cube of Number 2 = "<<N2*N2*N2;
				}
};
main()
{
	Multi_cube M;
	M.get_num();
	M.Multiplication();
	M.Cube();
	M.Cube1();
}
