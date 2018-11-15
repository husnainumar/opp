#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','2','4','6','8','1','3','5','7','9'};
	string u;
	cout<<"Enter any Name or word : ";
	cin>>u;
	for(int i=0;i<=61;i++)
	{
	for(int j=0;j<=10;j++)
	{
		if(a[i]==u[j])
		{
		cout<<a[i];
	}
	}
	}
}
