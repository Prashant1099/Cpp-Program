/* A program which takes Base and Exponent number as i/p and prints power
  accordingly using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int b,e,*p,*q,po=1,i;

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	p=&b;
	q=&e;

	for(i=1;i<=*q;i++)
	po=po**p;

	cout<<"\n ----------------------";
	cout<<"\n "<<*p<<" to the power "<<*q<<" = "<<po;

	getch();
}