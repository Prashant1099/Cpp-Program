/* A program which takes any three number as i/p and prints Greatest number
   among them using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int a,b,c,*p,*q,*r;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	p=&a;
	q=&b;
	r=&c;

	if(*p==*q && *p==*q)
	cout<<"\n All numbers are Equal";
	else
	if(*p>*q && *p>*r)
	cout<<"\n "<<*p<<" is greater than "<<*q<<" and "<<*r<<" ";
	else
	if(*q>*r)
	cout<<"\n "<<*q<<" is greater than "<<*p<<" and "<<*r<<" ";
	else
	cout<<"\n "<<*r<<" is greater than "<<*p<<" and "<<*q<<" ";

	getch();
}


