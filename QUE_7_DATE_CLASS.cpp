/*7. Write a C++ program to implement a class called Date that has private member variables for day, 
month, and year. Include member functions to set and get these variables, as well as to validate 
if the date is valid. */

#include<iostream>
using namespace std;
class Date
{
	int date;
	string month;
	int year;
	
	public:     
		    
		    void validate()
      		{
      			cout << "\n\n\t Enter date: ";
        		cin >> date;
				if (date < 1 || date > 31) 
				{
            	   		 cout << "\n\n\t Invalid Date";
						 date = 1;
 				} 
				cout << "\n\n\t Enter month: ";
				cin >> month;      
				if (month == "feb" || month == "February") 
				{
    			    if (date > 28)
  					{
		                cout << "\n\n\t Date is not valid" ;
             		   	date = 28;
  					}
  					else
  					{
  						cout << "\n\n\t Enter Year: ";
            	 		cin >> year;
					}
   				} 
		    	else if ((month == "apr" || month == "April")|| (month == "jun" || month == "June")|| 
				(month == "sep" || month == "September") || (month == "nov" || month == "November"))
			 	{
		 	 	    if (date > 30) 
			  		{
                       		 cout << "\n\n\t Date is not valid";
			 	  			 date = 30;
					}
				}
				 
	 		}

            void set_date()
			{
 	 		 	 cout<<"\n\n\t Today Date is :  "<<date;
 	 			 cout<<"\n\n\t Current month is :  "<<month;
		 		 cout<<"\n\n\t Current Year is :  "<<year;
		 		 cout<<"\n\n\t Complete date of today is :  "<<date<<"-"<<month<<"-"<<year;
		    }
};

main()
{
	Date D;
	
	D.validate();
	D.set_date();
}



