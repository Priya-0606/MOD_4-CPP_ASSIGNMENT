/*1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. 
Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data.
 (Single Inheritance)*/

#include<iostream>
#include<string>
using namespace std;

class Cricketar
{
	protected :
		string name;
		int age;
		string team;
		
	public:
 		    Cricketar(string n, int a, string t)
 		    {
 		     	 name = n;
        		 age = a;
        		 team = t;	
 			}
 			
 			void dis_Crktr_info()
 			{
 				cout<<"\n\n\t Name: "<<name;
 				cout<<"\n\n\t Age: "<<age;
 				cout<<"\n\n\t Team: "<<team;
 			}
};

class Batsman : public Cricketar
{
	private: 
			 int Tot_run;
			 double Avg_run;
			 string Best_per;
	
	public:
		
		Batsman(string n, int a, string t) :Cricketar(n, a, t)
		{
		}
		
		void get_data()
		{
			cout<<"\n\n\t Name: ";
			cin>>name;
			cout<<"\n\n\t Age: ";
			cin>>age;
			cout<<"\n\n\t Team: ";
		    cin>>team;
  		    cout<<"\n\n\t Enter Total runs :";
  		    cin>>Tot_run;
  		    //cout<<"\n\n\t Enter Average runs :";
  		    //cin>>Avg_run;  
  		    cout<<"\n\n\t Enter Best Performance :";
  		    cin>>Best_per;		    			  	 
		}
		void cal_avg_run()
		{
			Avg_run = (double)Tot_run / 50; // assuming 50 innings
		}
		void dis_Data()
		{
			dis_Crktr_info();
			cout<<"\n\n\t Total runs: "<<Tot_run ;
			cout<<"\n\n\t Average runs: "<<Avg_run;
			cout<<"\n\n\t Best performance: "<<Best_per;
		}
};

main()
{
	Batsman B(" ", 0, " ");
	B. get_data();
	B.cal_avg_run();
	B.dis_Data();
	B.dis_Crktr_info();
	
}
