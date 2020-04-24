/* A program which takes any number as Base and Exponent then prints power of
   that  number using class */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class power
{
	int b,e,po,i;

	public:
	void input();
	void process();
	void display();
	power();
}
power::power()
{
	po=1;
       //cout<<"\n Constructor call";
}
void main()
{
	clrscr();
	power obj;
	obj.input();
	obj.process();
	obj.display();

	getch();
}
void power::input()
{
	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;
}
void power::process()
{
	for(i=1;i<=e;i++)
	po=po*b;
}
void power::display()
{
	cout<<"\n----------------------------";
	cout<<"\n "<<b<<" to the power "<<e<<" = "<<po;
}

