/*5. Write a C++ program to create a class called Rectangle that has private
member variables for __ length and width__. Implement member functions to calculate the rectangle's __area and perimeter__.
*/

#include<iostream>
using namespace std;

class Rectangle
{
	int R_len;
	int R_wid;
	
	public : 
		void get_length();			
		void get_Width();						
		void Area();					
		void Perimeter();			
};
void Rectangle :: get_length()
			{
				cout<<"\n\n\t Enter length of a rectangle :  ";
				cin>>R_len;
			}
void Rectangle :: get_Width()			
			{
				cout<<"\n\n\t Enter width of a rectangle : ";
				cin>>R_wid;
			}				
void Rectangle :: Area()			
			{
				cout<<"\n\n\t Area of Rectangle : "<< R_len*R_wid;
			}
void Rectangle:: Perimeter()			
			{
				cout<<"\n\n\t Perimeter of Rectangle : "<< 2*(R_len + R_wid);
			}			
		
int main()
{
	Rectangle Rec;	
	Rec.get_length();	
	Rec.get_Width();	
	Rec.Area();	
	Rec.Perimeter();	
}

