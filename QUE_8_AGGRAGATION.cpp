/*8. Write a C++ program to implement a class called Student that has private member variables for name, 
class, roll number, and marks. Include member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement using of aggregation*/

#include <iostream>
#include <string>

using namespace std;

class Address 
{
	
public:
	int num;
    string street;
    string city;

    Address(int n, string st, string ct) : num (n), street (st), city (ct) { }

    void displayAddress() const 
	{
        std::cout << num << ", "<< street << ", " << city << ", " ;
	}
};


class Student 
{
    string name;
    int rollNumber, per;
    float marks;
    Address address;

public:
    Student(std::string n, int roll, float m, Address add) : name(n), rollNumber(roll), marks(m), address(add) {}
    char cal_Grade() const 
	{
        if (marks >= 80) return 'A';
        else if (marks >= 70) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else if (marks >= 40) return 'E';
        else return 'F';
    }

    void dis_info() const 
	{
        cout << "\n\n\t Name: " << name;
        cout << "\n\n\t Roll Number: " << rollNumber;
        cout << "\n\n\t Marks: " << marks;
        cout << "\n\n\t Grade: " << cal_Grade();
        std::cout <<"\n\n\t Address: ";
        address.displayAddress();
    }
};

int main() 

{
    string name, street, city;
    int rollNumber;
    float marks;

    cout << "\n\n\t Enter student's name: ";
    cin >> name;

    cout << "\n\n\t Enter student's roll number: ";
    cin >> rollNumber;

    cout << "\n\n\t Enter student's marks: ";
    cin >> marks;
    
   int num;
    cout << "\n\n\t Enter address number: ";
    cin >> num;
    cout << "\n\n\t Enter street: ";
    cin >> ws;  // To consume any leftover whitespace
    getline(cin, street);
    cout << "\n\n\t Enter city: ";
    getline(cin, city);

    Address address(num, street, city);
    Student student(name, rollNumber, marks, address);

    student.dis_info();

    return 0;
}
