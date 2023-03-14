// 7. Program Of Payroll System By Using Multilevel Inheritance

#include<iostream>
using namespace std;
class Income
{
	public:
		char name[30];
		int id;
void get()
{
	cout<<"\n\nEnter Name:";
	cin>>name;
	cout<<"\nEnter ID no:";
	cin>>id;
}
};
class Salary:public Income
{
	public:
	int hra,da,basic,gs;
	void calsal()
	{
		cout<<"\n\nEnter Basic Salary :";
		cin>>basic;
		cout<<"\nEnter HRA :";
		cin>>hra;
		cout<<"\n Enter DA :";
		cin>>da;
		gs=basic+hra+da;
	}
};
class Netsalary:public Salary
{
	public:
		int net,deduction;
		void netsal()
		{
			cout<<"\n\nEnter amount of deduction  ";
			cin>>deduction;
			net=gs-deduction;
		}
		void display()
		{
			cout<<endl;
			    
			cout<<"NAME :"<<name<<endl;
			cout<<"ID NO :"<<id<<endl;
			
			cout<<"________________________________________________________________________"<<endl;
			
			cout<<"Basic Salary :"<<basic<<endl;
			cout<<"HRA :"<<hra<<endl;
			cout<<"DA :"<<da<<endl;
			
			cout<<"________________________________________________________________________"<<endl;
			
			cout<<"Gross Salary :"<<gs<<endl;
			cout<<"Net Salary :"<<net<<endl;
			
			cout<<"________________________________________________________________________"<<endl;
		}
};
int main()
{
	Netsalary n1;
	n1.get();
	n1.calsal();
	n1.netsal();
	n1.display();
	return 0; 
}
