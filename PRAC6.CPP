/* A program which inputs Principle amount,rate and time and then prints
   Simple Interest and Net amount accordingly */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();

	float p,r,t,si,amt;

	cout<<"\n Enter Principle Amount = ";
	cin>>p;
	cout<<"\n Enter Rate             = ";
	cin>>r;
	cout<<"\n Enter Time in Year     = ";
	cin>>t;

	si=(p*r*t)/100;
	amt=p+si;

	cout<<"\n ---------------------------";
	cout<<"\n Principle amount = "<<p;
	cout<<"\n Rate             = "<<r;
	cout<<"\n Time             = "<<t;
	cout<<"\n Simple Interest  = "<<si;
	cout<<"\n Net Amount       = "<<amt;
	cout<<"\n ---------------------------";

	getch();
}