//  Write a C++ Program for matrix addition by using friend function

#include<iostream>
using namespace std;
class Matrix_2;
class Matrix_1
{
	int m,n;
	int a[5][5];
	
public: 
     void getm1();
     void putm1();
     
     friend void mastum (Matrix_1&,Matrix_2&);
};
void Matrix_1::getm1()
{
	int i,j;
	cout<<"\n\nMatrix_1:\n\n\tEnter RnC:\t";
	cin>>m>>n;
	cout<<"\n\n Enter The Elements :\n";
	for(i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		cin>>a[i][j];
	}
}
void Matrix_1::putm1()
{
	int i,j;
	cout<<"\n\nMatrix_1:\n\n";
	for(i=1;i<=m;i++)
	{
		cout<<"\t";
	for (j=1;j<n;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
class Matrix_2
{
	int m,n;
	int b[5][5];
	
  public:
  	 void getm2();
  	 void putm2();
  friend void mastum(Matrix_1&,Matrix_2&);
};
void Matrix_2::getm2()
{
	int i,j;
	cout<<"\n\nMatrix_2:\n\n\tEnter RnC:\t";
	cin>>m>>n;
	cout<<"\n\n Enter The Elements :\n";
	for(i=1;i<=m;i++)
	{
		for (j=1;j<=n;j++)
		cin>>b[i][j];
	}
}
void Matrix_2::putm2()
{
	int i,j;
	cout<<"\n\nMatrix_2:\n\n";
	for(i=1;i<=m;i++)
	{
		cout<<"\t";
	for (j=1;j<n;j++)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
}
void mastum (Matrix_1&x,Matrix_2&y)
{
	int i,j;
	if (x.m==y.m&&x.n==y.n)
	{
		cout<<"\n\nSum of Matrix_1And Matrix_2 : \n\n";
		for (i=0;i<x.m;i++)
		{
			cout<<"\t";
		for(j=0;j<x.n;j++)
		    cout<<x.a[i][j]+y.b[i][j]<<" ";
		    cout<<endl;
		}
		cout<<"\n\n";
	}
	else
	  cout<<"\n\nSyntax Error!!\n Can't Add Given Matrices\n\n";
}
int main()
{
	Matrix_1 m1;
	Matrix_2 m2;
	
	
	m1.getm1();
	m2.getm2();
	
	
	m1.putm1();
	m2.putm2();
	mastum(m1,m2);
}
