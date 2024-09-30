//10.Write a program to concatenate the two strings using Operator Overloading

#include<iostream>
#include<cstring>

using namespace std;

class Con_string
{
	public:
		char str[40];
		
		void get_string()
		{
			cout<<"\n\n\t Enter String : ";
			cin>>str;
		}
		void dis_string()
		{
			cout<<str;
		}
		Con_string operator+(const Con_string &x)
		{
			Con_string s;
			strcpy(s.str, str);
			strcat(s.str, x.str);
			return s;	
		}
};

main()
{
	Con_string s1, s2, s3;
	
	s1.get_string();
	s2.get_string();
	
	cout<<"\n\t-------------------------------------------------";
	cout<<"\n\n\t First string is  : ";
	s1.dis_string();
	
	cout<<"\n\n\t Second string is  : ";
	s2.dis_string();
	
	s3 = s1 + s2;
	
	cout<<"\n\n\t Conconated string is : ";
	s3.dis_string();
	
}


