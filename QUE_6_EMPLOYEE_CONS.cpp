/*6. Write a C++ program to implement a class called Employee that hasp private member variables for name, 
employee ID, and salary. Include member functions to calculate and set salary based on employee performance. 
Using of constructor*/

#include<iostream>
using namespace std;

class Employee
{
	string E_name;
	int E_id;
	float Sal;
	
	public : 
	
	   	  	Employee(int i, string e, float S)    
				{
			 	     E_id=i;
				     E_name=e;
				     Sal = S;
			    }
			    
			    void set_sal(float per_rate);
			 	void dis_Employee();					
};

void Employee :: set_sal(float per_rate)
{
 	 if(per_rate >= 1 && per_rate <= 3)
        Sal *= 1.05;
    else if(per_rate > 3 && per_rate <= 5)
        Sal *= 1.10;
    else if(per_rate > 5 && per_rate <= 7)
        Sal *= 1.15;
    else if(per_rate > 7 && per_rate <= 10)
        Sal *= 1.20;
    else
        cout << "\n\n\t Invalid performance rating !!!";
}

void Employee :: dis_Employee()
{
	cout << "\n\n\t Name: " << E_name ;
    cout << "\n\n\t Employee ID: " << E_id ;
    cout << "\n\n\t Salary: " << Sal ;
}

main() 
{
	
	int id;
	string e;
	float S;
	
	cout<<"\n\n\t Enter Employee ID : ";
	cin>>id;
	
	cout<<"\n\n\t Enter Name of the Employee : ";
	cin>>e;
	
	cout<<"\n\n\t Enter Salary : ";
	cin>>S;
	
	Employee E(id, e, S);
	
	cout<<"\n\n\t Enter Performance Rating (1-10) : ";
	float per_rate;
	cin >> per_rate;
	
	E.set_sal(per_rate);;
	E.dis_Employee();
	
}



