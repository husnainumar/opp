#include<iostream>
using namespace std;
int main()
{
	int eng,urdu,isl,bio,math,total;
	float per;
	
	cout<<"enter the marks of 5 subjects to claculate total marks and percentage"<<endl;
	
	cout<<"enter the marks of english"<<endl;
	cin>>eng;
		
	cout<<"enter the marks of urdu"<<endl;
	cin>>urdu;
	
		
	cout<<"enter the marks of islamiyat"<<endl;
	cin>>isl;
	
		
	cout<<"enter the marks of  biology"<<endl;
	cin>>bio;
		
	cout<<"enter the marks of math"<<endl;
	cin>>math;
	total=eng+urdu+isl+bio+math;
	
	cout<<"total marks is:"<<total<<endl;
	
	per=total/500*100;
	
	cout<<"percentage  is:"<<per;
	
	
}
