// 7. Write a C++ Program to illustrates the use of Constructors in multilevel inheritance.
#include<iostream>
using namespace std;	
class A
{
	protected:
	string name;
	public:
		
		A()
		{
			
		};
};

class B : public A
{
	protected:
	int age;
		public:
			b()
			{
				
			};
};

class CON : public B
{
	
	public:
		CON()
		{
		
		cout<<"\n\n\t Enter Your name: ";
		cin>>name;
		
		cout<<"\n\n\t Enter your age: ";
		cin>>age;
		
		cout<<"\n\n\t Your Name is:"<<name;
		
		cout<<"\n\n\t Your age is:"<<age;
		};
};

int main()
{
	CON c;
}
