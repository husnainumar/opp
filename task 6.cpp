#include<iostream>
using namespace std;
int main()
{
	int no,ent,sum=0;
	cout<<"How many  numbers you want to sum"<<endl;
	cin>>no;
	cout<<"Enter "<<no<<" numbers: "<<endl;
	for(int i=1;i<=no;i++)
	{
	
		cin>>ent;
		sum=sum+ent;
	}
	
	cout<<"Sum is = "<<sum;
	
}
