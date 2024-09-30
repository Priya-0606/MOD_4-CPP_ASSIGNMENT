/*QUESTION : 5. Write a C++ program to create a class called Triangle that has private member variables for 
the lengths of its three sides. Implement member functions to determine if the triangle is 
equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;

class Triangle
{
	int l1, l2, l3;
	
	public : 
	
		   	 	void get_len();
	   	 		void print_type();	
};

void Triangle :: get_len()
{
	int l1, l2, l3;
 	 cout<<"\n\n\t Enter length of side 1 : ";
	 cin>>l1;
	 cout<<"\n\n\t Enter length of side 2 : ";
	 cin>>l2;
	 cout<<"\n\n\t Enter length of side 3 : ";
	 cin>>l3;		   	 		
}

void Triangle :: print_type()
{
	int l1, l2, l3;
    if(l1 == l2 && l2 == l3)
		  cout << "\n\n\t The triangle is equilateral." ;
    else if(l1 == l2 || l2 == l3 || l1 == l3)
	      cout << "\n\n\t The triangle is isosceles." ;
    else
	      cout << "\n\n\t The triangle is scalene." ;
}

main()
{
	Triangle T;
	
	T.get_len();
	T.print_type();
}


