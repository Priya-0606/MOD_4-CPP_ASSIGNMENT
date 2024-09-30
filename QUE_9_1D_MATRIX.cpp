//9. Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Matrix
{
	private:
		int *arr;
		int size;
		
	public:
		Matrix(int s)
		{
			size = s;
			arr = new int[s];
		}
		
		void input()
		{
			for(int i=0; i<size; i++)
			{
				cout<<"\n\n\t Enter Element ["<<i+1<<"] : ";
				cin>>arr[i];
			}
		}
		
		void display()
		{
			for(int i=0; i<size; i++)
			{
				cout<<"\n\n\t Element ["<<i+1<<"] : "<<arr[i];
			}
		}
		
		Matrix operator+(Matrix m)
		{
			Matrix temp(size);
			for(int i=0; i<size; i++)
			{
				temp.arr[i] = arr[i] + m.arr[i];
			}
			return temp;
		}
};

int main()
{
	int size;
	cout<<"\n\n\t Enter the size of the matrix : ";
	cin>>size;
	
	Matrix m1(size);
	Matrix m2(size);
	Matrix m3(size);
	
	cout<<"\n\n\t Enter the elements of the first matrix : ";
	m1.input();
	cout<<"\n\n\t Enter the elements of the second matrix : ";
	m2.input();
	
	m3 = m1 + m2;
	
	cout<<"\n\n\t First Matrix : ";
	m1.display();
	cout<<"\n\n\t Second Matrix : ";
	m2.display();
	cout<<"\n\n\t Sum of the two matrices : ";
	m3.display();
	
	return 0;
}
