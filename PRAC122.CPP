/* A program which takes any four number as i/p and prints Total and Average
   of that number using Hybride Enharitance */

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
class C
{
	public:
	int c;
	void cinput();
	void cdisplay();
};
void C::cinput()
{
	cout<<"\n Enter C = ";
	cin>>c;
}
void C::cdisplay()
{
	cout<<"\n C = "<<c;
}
class D:public B,public C
{
	int d;
	float sum,avg;

	public:
	void dinput();
	void dprocess();
	void ddisplay();
};
void D::dinput()
{
	B::binput();
	C::cinput();
	cout<<"\n Enter D = ";
	cin>>d;
}
void D::dprocess()
{
	sum=a+b+c+d;
	avg=sum/3;
}
void D::ddisplay()
{
	B::bdisplay();
	C::cdisplay();

	cout<<"\n D = "<<d;
	cout<<"\n---------------------";
	cout<<"\n Summation = "<<sum;
	cout<<"\n Average   = "<<avg;
}
void main()
{
	clrscr();

	D obj;
	obj.dinput();
	obj.dprocess();
	obj.ddisplay();

	getch();
}




