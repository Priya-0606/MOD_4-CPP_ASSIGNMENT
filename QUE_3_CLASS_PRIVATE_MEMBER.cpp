/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member functions to get and set these variables.*/

#include<iostream>
using namespace std;

class Car
{
	int year;
	string company;
	string model;
	
	public : 
		   	 
   	 	 	 void get_DetCar()
   	 	 	 {
   	 	 	 	cout<<"\n\n\t Enter name of the car company : ";
   	 	 	 	cin>>company;
   	 	 	 	cout<<"\n\n\t Enter model of the car : ";
   	 	 	 	cin>>model;
   	 	 	 	cout<<"\n\n\t Enter the year car was bought : ";
   	 	 	 	cin>>year;
 			 }
 			 
 			 void put_DetCar()
 			 {
 			 	cout<<"\n\n\t Name of the company is : "<<company;
 			 	cout<<"\n\n\t Name of the model : "<<model;
 			 	cout<<"\n\n\t Year : "<<year;
             }
};

main()
{
	Car C;
	cout<<"\n\n\t*----------------------------*-----------------------------";
	C.get_DetCar();
	cout<<"\n\n\t*----------------------------*-----------------------------";
	C.put_DetCar();
	cout<<"\n\n\t*----------------------------*-----------------------------";
}
