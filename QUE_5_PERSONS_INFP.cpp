/*6. Write a C++ program to create a class called Person that has private
member variables for __name, age and country.__ Implement member functions to __set and get__ the values of these variables.
*/
#include<iostream>
using namespace std;
 
class Human
{
	string H_Name, H_Country;
	int H_Age;

	public : 
				void get_Human()
					{
						cout<<"\n\n\t Enter your name : ";
						cin>>H_Name;
										
						cout<<"\n\n\t Enter your country name : ";
						cin>>H_Country;									
					
						cout<<"\n\n\t Enter your age : ";
						cin>>H_Age;
					}
					
				void Print_Human()
					{
						cout<<"\n\n\t Human name : "<<H_Name;
						cout<<"\n\n\t Human country : "<<H_Country;
						cout<<"\n\n\t Human age : "<<H_Age;
					}
	
};

main()
{
	Human H;
	
	H.get_Human();
	H.Print_Human();

}

