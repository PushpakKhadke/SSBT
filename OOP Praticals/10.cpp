// 10. Program to illustrate the use of class template

#include<iostream>
using namespace std;
template <class T>
class Swap
{
	T temp;
	T a;
	T b;
	
 public:
 	void get(T x,T y)
 	{
 		a=x;
 		b=y;
	}
    void show()
    {
    	temp=a;
    	a=b;
    	b=temp;
    	cout<<"\nA="<<a<<endl;
    	cout<<"\nB="<<b<<endl;
	}
};
int main()
{
	double a,b;
	Swap<int>p;
	cout<<"\n\nEnter The Integers You Want To Swap :";
	cin>>a>>b;
	
	cout<<"\n\n Integers Before Swapping :";
	cout<<"\n\nA=:"<<a<<endl;
	cout<<"\nB=:"<<b<<endl;
	p.get(a,b);
	
	cout<<"\n\n Tntegers After Swapping :"<<endl;\
	p.show();
	
	Swap<float>q;
	
	cout<<"\n\nEnter The Float Values You Want To Swap:";
	cin>>a>>b;
	
	cout<<"\n\nFloat Values Before Swapping:";
	cout<<"\n\nA=:"<<a<<endl;
	cout<<"\n\nB=:"<<b<<endl;
	p.get(a,b);
	
	cout<<"\n\nFloat Values After Swapping:"<<endl;
	p.show();
}
