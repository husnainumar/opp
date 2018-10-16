#include<iostream>
using namespace std;
int main()
{
	int no,sum=0;
	cout<<"enter a no till you want to print and sum even numbers"<<endl;
	cin>>no;
	cout<<endl;
	for(int i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			cout<<i<<"is even number "<<endl;
			sum=sum+i;
		}
		
		
	}
	cout<<endl;
	cout<<"sum of all even numbers is = "<<sum;
}
