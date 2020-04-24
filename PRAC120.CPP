/* A program which takes any three number as i/p and prints Total and Average
   of that number using Multilevel Enharitance */

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
	cout<<"\n A = "<<a;
}
class B:public A
{
	public:
	int b;
	void binput();
	void bdisplay();
};
void B::binput()
{
	A::ainput();
	cout<<"\n Enter B = ";
	cin>>b;
}
void B::bdisplay()
{
	A::adisplay();
	cout<<"\n B = "<<b;
}
class C:public B
{
	int c;
	public:
	float sum,avg;
	void cinput();
	void cprocess();
	void cdisplay();
};
void C::cinput()
{
	B::binput();
	cout<<"\n Enter C = ";
	cin>>c;
}
void C::cprocess()
{
	sum=a+b+c;
	avg=sum/3;
}
void C::cdisplay()
{
	B::bdisplay();
	cout<<"\n C = "<<c;
	cout<<"\n-------------------------";
	cout<<"\n Total   = "<<sum;
	cout<<"\n Average = "<<avg;
}
void main()
{
	clrscr();

	C obj;
	obj.cinput();
	obj.cprocess();
	obj.cdisplay();

	getch();
}

