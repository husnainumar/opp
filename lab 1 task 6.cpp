#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"ascii codes of first four character"<<endl;
	cout<<"enter characters to check their Ascii codes"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 'a':
			
				cout<<"assci code of a is 097"<<endl;
				break;
		case 'A':
			
			cout<<"assci code of A is 065"<<endl;
			break;
			
		case 'b':
			
				cout<<"assci code of b is 098"<<endl;
				break;
		case 'B':
			
			cout<<"assci code of B is 066"<<endl;
			break;
		
		case 'c':
			
				cout<<"assci code of c is 099"<<endl;
				break;
		case 'C':
			
			cout<<"assci code of C is 067"<<endl;
			break;
			
		case 'd':
			
				cout<<"assci code of a is 100"<<endl;
				break;
		case 'D':
			
			cout<<"assci code of A is 068"<<endl;
			break;
			
			default:
			cout<<"you input is not in our record"<<endl;
			
	}
}
