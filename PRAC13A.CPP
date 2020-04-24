/* A program which prints roots of any quedratic equation*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2;

	clrscr();

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	d=b*b-4*a*c;

	cout<<"\n D = "<<d;

	if(d>0)
	{
		cout<<"\n The Equation contains two roots : ";

		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;

		cout<<"\n First Root  = "<<r1;
		cout<<"\n Second Root = "<<r2;
	}
	else
	if(d==0)
	{
		cout<<"\n Both roots are same of the equation : ";

		r1=r2=-b/(2*a);

		cout<<"\n First Root  = "<<r1;
		cout<<"\n Second Root = "<<r2;
	}
	else
	cout<<"\n Roots are not possible i.e. imaginary roots will occure";

	getch();
}




