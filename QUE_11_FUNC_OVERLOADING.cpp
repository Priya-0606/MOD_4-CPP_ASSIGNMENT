/* 11. Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area */

#include<iostream>
using namespace std;
class Calc
{
	int n1,n2,res;
	
	public:
		void result()
		{
			int area,breadth;
			
			cout<<"\n\n\t Enter Height of rectangle: ";
			cin>>area;
			
			cout<<"\n\n\t Enter Bredth of rectangle: ";
			cin>>breadth;
			
			n1=area;
			n2 = breadth;
			
			res = n1*n2;
			
			cout<<"\n\n\t The Area of Rectangle is : "<<res;
		};
		
		void result(int area,int breadth)
		{
			
			n1 = area;
			n2 = breadth;
			
			res = 0.5*n1*n2;
			cout<<"\n\n\t The Area of Triangle is: "<<res;
		}
		
		void result(double area)
		{
			
			float pie = 3.14;
			n1 = area;
			n2 = pie;
			
			res = pie*n1*n1;
			
			cout<<"\n\n\t The Area of circle is: "<<res;
		}
};
main()
{
	int choice,n1,n2;
	Calc C;
	
	cout<<"\n\t--------------Choice-----------\n";
	
	cout<<"\n\n\t 1. Rectangle \n\t 2. Triangle \n\t 3. Circle \n\n";
	cout<<"\n\n\t Enter Your choice: ";
	cin>>choice;
	
	
	switch(choice)
	{
		case 1:
			C.result();
			break;
		case 2:
			cout<<"\n\n\t Enter side of Triangle: ";
			cin>>n1;
			
			cout<<"\n\n\t Enter value of Breadth for Triangle: ";
			cin>>n2;
			C.result(n1,n2);
			break;
		case 3:
			cout<<"\n\n\t Enter Radius of circle: ";
			cin>>n1;
			
			C.result(n1);
			break;
		default:
			cout<<"\n\n\t Invalid Choice";
			
	}
}
