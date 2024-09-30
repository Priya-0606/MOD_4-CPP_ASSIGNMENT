//6. Write a C++ Program to show access to Private Public and Protected using Inheritance.

#include<iostream>
using namespace std;

class A
{
	string name;
	
	public:
			A()
			{
				//const. public accesses private (string name).
				cout<<"\n\n\t Enter Your Name: ";
				cin>>name;
			};
};

class B : public A  //class B inherits class A
{
	protected:
		int age;
		public:
			B()
			{
				// int is protected and public const. can access it
				cout<<"\n\n\t Enter Your Age: ";
				cin>>age;
			}
};

int main()
{
	// B class can access A, that's why only ine object is made.
	B obj;	
}
