/* A Program of total and average with function of with argument and without
   return type */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void total(int,int,int);
void main()
{
	clrscr();

	int a,b,c;
	float tot,avg;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	total(a,b,c);
	getch();
}
void total(int x,int y,int z)
{
	float tot,avg;

	tot=x+y+z;
	avg=tot/3;

	cout<<"\n-----------------";
	cout<<"\n Total   = "<<tot;
	cout<<"\n Average = "<<avg;
}
