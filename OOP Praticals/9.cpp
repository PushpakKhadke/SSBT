// 9. Program to illustrate the use of function template

#include<iostream>
using namespace std;
template<class T>
void sort(T a[10])
{
	T temp;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted array="<<endl;
	for(i=0;i<5;i++)
	  cout<<a[i]<<endl;
};
int main ()
{
	int a[5],i,j;
	float b[5];
	char  c[5];
	
	cout<<"\n Enter 5 integer elements :";
	for(i=0;i<5;i++)
	  cin>>a[i];
	cout<<"\n Enter 5 decimal elements :";
	for(i=0;i<5;i++)
	cin>>b[i];
	cout<<"\nEnter 5 character :";
	for(i=0;i<5;i++)
	cin>>c[i];
	
	sort(a);
	sort(b);
	sort(c);
}
