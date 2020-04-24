#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();

	float r,ar,par,pi=3.14;

	cout<<"\n Enter Radius : ";
	cin>>r;

	ar=pi*r*r;
	par=2*pi*r;

	cout<<"\n Area of Circle  with radius "<<r<<" = "<<ar;
	cout<<"\n Parimetere of Circle = "<<par;

	getch();
}

