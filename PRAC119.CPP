/* A program which takes any two number as i/p and prints sum of those number
   using Enharitance */
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class A
{
	public:
	int a;
	void ainput();
	void adisplay();
};
void A::ainput()
{
	cout<<"\n Enter A = ";
	cin>>a;
}
void A::adisplay()
{
	clrscr();
	cout<<"\n  A  = "<<a;
}

class B:public A
{
	int b,sum;

	public:
	void binput();
	void bprocess();
	void bdisplay();
};
void B::binput()
{       A::ainput();
	cout<<"\n Enter B = ";
	cin>>b;
}
void B::bprocess()
{
	sum=a+b;
}
void B::bdisplay()
{       A::adisplay();
	cout<<"\n  B  = "<<b;
	cout<<"\n-----------------------------------------";
	cout<<"\n Summation of "<<a<<" + "<<b<<" = "<<sum;
}



void main()
{
	clrscr();

	B obj;

	obj.binput();
	obj.bprocess();
	obj.bdisplay();

	getch();
}





