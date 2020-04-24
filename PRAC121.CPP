/* A program which takes any three number as i/p and prints Total and Average
   of that number using Multiple Enharitance */

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
class B
{
	public:
	int b;
	void binput();
	void bdisplay();
};
void B::binput()
{
	cout<<"\n Enter B = ";
	cin>>b;
}
void B::bdisplay()
{
	cout<<"\n B = "<<b;
}
class C:public A,public B
{
	int c;
	float sum,avg;

	public:
	void cinput();
	void cprocess();
	void cdisplay();
};
void C::cinput()
{       A::ainput(); B::binput();
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
	A::adisplay();
	B::bdisplay();

	cout<<"\n C = "<<c;
	cout<<"\n-----------------------";
	cout<<"\n Summation = "<<sum;
	cout<<"\n Average   = "<<avg;
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



