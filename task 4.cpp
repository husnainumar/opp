#include<iostream>
int swap(int &, int &);
using namespace std;
int main()
{
	int a,b;
	cout<<"Here is the example of function in which we swapping two numbers"<<endl;
	
	a=90;b=500;
	cout<<"A is"<<a<<endl;
	cout<<"B is"<<b<<endl;
	swap(a,b);
	
	cout<<"after processing"<<endl;
	cout<<" a is "<<a<<endl;
	cout<<" b is "<<b;
}
int swap(int & a,int & b)


{
	int c;
	
c=a;
a= b;
b=c;


	
}
