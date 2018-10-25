#include<iostream>
using namespace std;
struct student
{
	char name[20];
	char id[20];
	char dep[20];
	char sem[20];
	char courses[20];
	char marks[20];
};
struct course
{
 	char id[20];
 	char name[20];
 	char marks[20];
};
int n;
int ent()
{
		student s; course c[6];
	cout<<"Enter Student Name : ";
	cin>>s.name;
	cout<<"Enter Student ID : ";
	cin>>s.id;
	cout<<"Enter Department : ";
	cin>>s.dep;
	cout<<"Enter Semester : ";
	cin>>s.sem;
	cout<<"Enter  Courses : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	cout<<"Enter Course Name : ";
	cin>>c[i].name;
	cout<<"Enter Course ID : ";
	cin>>c[i].id;
	cout<<"Enter Course Marks : ";
	cin>>c[i].marks;
}
}
int out()
{
	student st; course co[6];
	cout<<"Student Name : ";
	cout<<st.name<<endl;
	cout<<"Student ID : ";
	cout<<st.id<<endl;
	cout<<"Student Department : ";
	cout<<st.dep<<endl;
	cout<<"Student Semester : ";
	cout<<st.sem<<endl;
	for(int i=1;i<=n;i++)
	{
	cout<<"Course Name : ";
	cout<<co[i].name<<endl;
	cout<<"Course ID : ";
	cout<<co[i].id<<endl;
	cout<<"Course marks : ";
	cout<<co[i].marks<<endl;
}
}
int main()
{

	ent();
	out();
}
