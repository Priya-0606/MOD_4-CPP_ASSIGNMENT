/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the circle's area and circumference. */

#include<iostream>
using namespace std;

class Circle
{
	int rad;
	float pi;
	
	public :
		void get_Radious();
		void Area();
		void Circumference();
};

void Circle :: get_Radious()
		{
			cout<<"\n\n\t Input Radious : ";
			cin>>rad;
			pi=3.14;
		}
void Circle :: Area()
		{
			cout<<"\n\n\t Area of Circle : "<< pi*rad*rad;
		}
void Circle :: Circumference()
		{
			cout<<"\n\n\t Circumference of CIrcle : "<< 2*pi*rad;
		}
		
main()
{
	Circle C;
	C.get_Radious();
	C.Area();
	C.Circumference();
	
}




