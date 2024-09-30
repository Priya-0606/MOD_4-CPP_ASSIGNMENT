/*5. Assume that the test results of a batch of students are stored in three different classes. Class Students are 
storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total 
marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll 
number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;

class Students
{
	protected:
		int Roll_no;
	public:
		void RollNum()
		{
			cout<<"\n\n\t Enter Roll number : ";
			cin>>Roll_no;
		}
};

class Test : public Students
{
	protected:
	 		  int Sub_1, Sub_2;
	
	public:
		get_marks()
		{
			cout<<"\n\n\t Enter Marks of Subject 1 : ";
			cin>>Sub_1;
			cout<<"\n\n\t Enter Marks of Subject 2 : ";
			cin>>Sub_2;
		}
};
class Result : public Test
{
	int Resu;
	
	public:
		cal_res()
		{
			Resu = Sub_1+Sub_2;
		}
		Print()
		{
			cout<<"\n\n\t Roll Num : "<<Roll_no;
			cout<<"\n\n\t Marks of Subject 1 : "<<Sub_1;
			cout<<"\n\n\t Marks of Subject 2 : "<<Sub_2;
			cout<<"\n\n\t Total Marks is : "<<Resu;
		}
};
main()
{
	Result R;
	
	R.RollNum();
	R.get_marks();
	R.cal_res();
	R.Print();
}
