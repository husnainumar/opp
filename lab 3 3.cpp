#include<iostream>
using namespace std;
struct length
{
	float ft;
};
int main()
{
	float inch;
	length l;
	cout<<"Enter lenght in feet : ";
	cin>>l.ft;
	inch=l.ft*12;
	cout<<"Length in inches is : "<<inch<<" feet";
}
