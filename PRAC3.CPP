#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();

	int b,h;
	float ar;

	cout<<"\n Enter Base : ";
	cin>>b;
	cout<<"\n Enter Height : ";
	cin>>h;

	ar=(b*h)/2;

	cout<<"\n Area of Triangle with Base "<<b<<" and Height "<<h<<" = "<<ar;

	getch();
}