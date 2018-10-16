#include<iostream>
using namespace std;
int main()
{
	int no,fact=1;
	cout<<"enter any number to find its factorial:"<<endl;
	cin>>no;
	cout<<endl;
	
	for(int i=no;i>=1;i--)
	{
		cout<<i<<" * ";
		fact=fact*i;
	}
	
	cout<<"="<<fact;
	
}
