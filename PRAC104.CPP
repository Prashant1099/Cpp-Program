/* A program of Function Overloading */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void area(int);
void area(float);
void area(int,int);
void main()
{
	clrscr();

	int s,b,h;
	float r;

	cout<<"\n Enter Side of Square    = ";
	cin>>s;
	cout<<"\n Enter Radius of Circle  = ";
	cin>>r;
	cout<<"\n Enter Base of Triangle  = ";
	cin>>b;
	cout<<"\n Enter Height of Triangle= ";
	cin>>h;

	area(s);
	area(r);
	area(b,h);

	getch();
}
void area(int x)
{
	clrscr();
	float ar;
	ar=x*x;

	cout<<"\n Side of Square = "<<x;
	cout<<"\n\n Area of Square = "<<ar;
	cout<<"\n Press any key for next output....";
	getch();
}
void area(float x)
{
	clrscr();
	float ar;
	ar=3.14*x*x;

	cout<<"\n Radius of circle = "<<x;
	cout<<"\n\n Area of Circle   = "<<ar;
	cout<<"\n Press any key for next output....";
	getch();
}
void area(int x,int y)
{
	clrscr();
	float ar;
	ar=(x*y)/2;

	cout<<"\n Base of Triangle   = "<<x;
	cout<<"\n Height of Triangle = "<<y;
	cout<<"\n\n Area of Triangle   = "<<ar;
	cout<<"\n Press any key for Exit....";
	getch();
}


