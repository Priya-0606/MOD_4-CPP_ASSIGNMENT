// 13. Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

class Find_Max
{
	int M1, M2;
	
	public:
			void get()
			{
				cout<<"\n\t Enter M1 : ";
				cin>>M1;
				cout<<"\n\t Enter M2 : ";
				cin>>M2;	
			}				
			friend void Maximum(Find_Max M);			
};

void Maximum(Find_Max M)
{
    if(M.M1>M.M2)
        cout<<"\n\n\t '"<<M.M1 << "' is Maximum.";
    else
        cout<<"\n\t '"<<M.M2 << "' is Maximum.";		 
}

main()
{
	Find_Max M;
	
	M.get();
	Maximum(M);
	return 0;
}



