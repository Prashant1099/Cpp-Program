/* A Program of total and average with function of without argument and without
   return type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void total();
void main()
{
	clrscr();
	total();
	getch();
}
void total()
{
	int a,b,c;
	float tot,avg;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	tot=a+b+c;
	avg=tot/3;

	cout<<"\n-----------------";
	cout<<"\n Total   = "<<tot;
	cout<<"\n Average = "<<avg;
}
