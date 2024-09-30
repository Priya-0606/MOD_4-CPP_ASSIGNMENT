//2. Write a C++ Program to find Area of Rectangle using inheritance

#include<iostream>
using namespace std;
class ractangle
{
	protected:
		float l, W;
		int calc;
};

class Area : public ractangle
{
	
	public:
		
		void get()
		{
			cout<<"\n\n\t Enter the length of ractangle: ";
			cin>>l;
			
			cout<<"\n\n\t Enter the width of ractangle: ";
			cin>>W;
		}
		
		void calculation()
		{
			calc = l*W;
			
			cout<<"\n\n\t The area of Rectangle is: "<<calc;
		}
	
};

int main()
{
	Area A;
	
	A.get();
	A.calculation();
}





