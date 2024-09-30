/*3. Create a class person having members name and age. Derive a class student having member percentage. 
Derive another class teacher having member salary. Write necessary member function to initialize, read and write 
data. Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;

class person
{
	protected : 
			  int age;
			  string name;
	
	public :
		   		void get_data()
		   		{
		   			cout<<"\n\n\t Enter Name : ";
		   			cin>>name;
		   			cout<<"\n\n\t Enter Age : ";
		   			cin>>age;
	   			}	
};

class student 
{
	protected :
			   int per;
	
	public :
		   	  	void get_per()
		   	  	{
		   	  		cout<<"\n\n\t Enter Percentage : ";
		   	  		cin>>per;
 				}	
};

class Teacher : public person, public student
{
	int salary;
	
	public :
		   	   void get_sal()
		   	   {
		   	   		cout<<"\n\n\t Enter Salary of the Teacher : ";
		   	   		cin>>salary;
			   }
			   
			   void Print()
			   {
			   		cout<<"\n\n\t Name of the Student : "<<name;
			   		cout<<"\n\n\t Age of the Student : "<<age;
			   		cout<<"\n\n\t Percentage of the Student : "<<per;
			   		cout<<"\n\n\t Salary of the Teacher : "<<salary;			   		
			   }	
};

main()
{
	Teacher T;
	
	T.get_data();
	T.get_per();
	T.get_sal();
	T.Print();	
}
