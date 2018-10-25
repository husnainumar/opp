#include<iostream>
using namespace std;
struct emp
	{
		char name[20];
		char date[20];
		char des [20];
	};
int main()
{
	emp p1;
	emp p2;
	cout<<"Enter Employee Name : ";
	cin>>p1.name;
	cout<<"Enter Employee date of joining : ";
	cin>>p1.date;
	cout<<"Enter Designation : ";
	cin>>p1.des;
	
	cout<<"Info. of Employee:"<<endl;
	cout<<"Name of Employee "<<p1.name<<endl;
	cout<<"Date of joining "<<p1.date<<endl;
	cout<<"Desig. "<<p1.des<<endl;
}

