#include<iostream>
using namespace std;
int main()
{
	float  sum,sub,mul,div,a,b;
	int ch;
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
