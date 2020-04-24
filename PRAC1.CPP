#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();

	int a,b,c;
	float tot,avg;

	cout<<"\n Enter A : ";
	cin>>a;
	cout<<"\n Enter B : ";
	cin>>b;
	cout<<"\n Enter C : ";
	cin>>c;

	tot=a+b+c;
	avg=tot/3;

	cout<<"\n Total   = "<<tot;
	cout<<"\n Average = "<<avg;

	getch();
}