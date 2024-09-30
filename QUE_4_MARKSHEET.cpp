//4. Write a C++ Program display Student Mark sheet using Multiple inheritance. 
#include<iostream>
using namespace std;

class Student
{
	
	 public :
	 	
	 	string name;
	 	int age;
		int s_id;
		
			void get_data()
 			{
	 	 	    cout<<"\n\n\t Enter Name : ";
 				cin>>name;
  				cout<<"\n\n\t Enter Age : ";
   				cin>>age;
   				cout<<"\n\n\t Enter Student Id : ";
				cin>>s_id;
   			}	
			
			void put_Data()
			{
 	 		    cout<<"\n\n\t Name of the Student : "<<name;
 				cout<<"\n\n\t Age of the Student : "<<age;
				cout<<"\n\n\t Student Id : "<<s_id;
			}
};
class Marks 
{
	
	
	public :
			int sub[5];
			int Total;
			float per; 
		
			void get_subject()
			{	
				for(int i=0;i<5;i++)
				{
					cout<<"\n\n\t Enter Student Sub Marks ["<<i+1<<"] : ";
					cin>>sub[i];
					Total=Total+sub[i];
				}
					
			}			
			void Print()
			{
				for(int i=0;i<5;i++)
				cout<<"\n\n\t Student Subject Marks - "<<i+1<<" : "<<sub[i];
				cout<<"\n\n\t Total Marks of the student : "<<Total;
				per=Total/5;
				cout<<"\n\n\t Percentage of the student : "<<per<<" %";
			}	
};

class Gread : public Student, public Marks
{
	
	public :
		void Greads()
		{
			for(int i=0;i<5;i++)
			{
				if(sub[i] < 40)
				{
					cout<<"\n\n\t Fail !!";
					return;
				}
			}
		    if(per>=70)
		        printf("\n\n\t   Grade = A+");		
		    else if(per>=60)
		        printf("\n\n\t   Grade = A");
		    else if(per>=50)
		        printf("\n\n\t   Grade = B");	
		    else if(per>=40)
		        printf("\n\n\t   Grade = C");
		    else
                printf("\n\n\t   Grade = Fail");
		}
};
main()
{
	Gread G;
	
	G.get_data();
	G.get_subject();
	G.put_Data();
	G.Print();
	G.Greads();
	
	return 0;
}
