#include<iostream>
using namespace std;
int main()
{
	
	int no,i=1,ch;
	float  sum,sub,mul,div,a,b;
	
	cout<<"enter any number to print tha table"<<endl;
	cin>>no;
	
		cout<<"using  Do while loop"<<endl;
	
	do
	{
		cout<<no<<"*"<<i<<"="<<no*i<<endl;
		i++;
	}
	
	while(i<=10);
	i=1;
	
	cout<<"Using While loop"<<endl;
	
	
	while(i<=10)
	{
		cout<<no<<"*"<<i<<"="<<no*i<<endl;
		i++;
	}
	cout<<endl<<endl;
	
	cout<<"using for loop"<<endl;
	
	for(int i=1;i<=10;i++)
	{
		cout<<no<<"*"<<i<<"="<<no*i<<endl;
		
	}
	cout<<endl<<endl;
	
	cout<<"using switch statement perform algebric expression"<<endl;
	
	cout<<"                   This is a simple calculator\n"<<endl;
	cout<<"Enter 2 values to perform basic opertion\n"<<endl;
	cout<<"Enter 1st value"<<endl;
	cin>>a;
	cout<<"Enter 2nd value"<<endl;
	cin>>b;
	cout<<endl<<endl;
	cout<<"Press 1 for adddtion  \nPress 2 for subtracrtion \nPress 3 for multiplication \nPress 4 for division"<<endl;
	cin>>ch;
	cout<<endl;
	switch(ch)
	{case 1:
	sum=a+b;
	cout<<"Sum of "<<a<<" and "<<b<<" is = "<<sum<<endl;	
	break;
	case 2:
	sub=a-b;
	cout<<"Subtraction of "<<a<<" and "<<b<<" is = "<<sub<<endl;
	break;
	case 3:
	mul=a*b;
	cout<<"Multiplication of "<<a<<" and "<<b<<" is = "<<mul<<endl;
	break;	
	case 4:
	div=a/b;
	cout<<"Division of "<<a<<" and "<<b<<" is = "<<div<<endl;
	break;	
	default:
	cout<<"you enter wrong choice please try again"<<endl;
}

	
}
