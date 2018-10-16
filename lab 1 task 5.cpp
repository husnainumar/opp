#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter 2 numbers for swapping"<<endl;
	
	cout<<"enter 1st number"<<endl;
	cin>>a;
	
	cout<<"enter 2nd number"<<endl;
	cin>>b;
	
	swap(a,b);
	cout<<"after swapping"<<endl;
	cout<<" 1st is "<<a;
	cout<<" 2nd is "<<b;
}
