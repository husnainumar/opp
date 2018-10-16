#include<iostream>
using namespace std;
int main()
{
	int marks[5],sum=0;
	cout<<"Here is the example of one dimensional Array:"<<endl;
	cout<<"Getting Marks of 5 student and sum them"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the marks of "<<i+1<<" student :"<<endl;
		cin>>marks[i];
		sum=sum+marks[i];
	}
	
	cout<<"Marks of 5 students is :"<<sum<<endl;
	
}

