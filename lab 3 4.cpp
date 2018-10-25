#include<iostream>
using namespace std;
struct employee 
	{
		char name[15];
		char date[10];
		char des [30];
	};
int main()
{
	employee p[5];
	for(int i=1;i<=5;i++)
	{
	cout<<"Enter Employee " <<i<< " Name : "; 
	cin>>p[i].name;
	cout<<"Enter Employee "<<i<< " date of joining : ";
	cin>>p[i].date;
	cout<<"Enter Employee "<<i<<" Designation : ";
	cin>>p[i].des;
	}
		cout<<"\n\t\t\tInformation of Employee\n";
	for(int i=1;i<=5;i++)
	{
		cout<<"\n";
	cout<<"Name of Employee : "<<p[i].name<<endl;
	cout<<"Date of joining : "<<p[i].date<<endl;
	cout<<"Designation : "<<p[i].des<<endl;
}
}
