/* A program which takes any three number as i/p and prints sum of those numbers
   using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int a,b,c,*p,*q,*r;
	float sum,avg;

	cout<<"\n Enter A = ";
	cin>>a;
	cout<<"\n Enter B = ";
	cin>>b;
	cout<<"\n Enter C = ";
	cin>>c;

	p=&a;
	q=&b;
	r=&c;

	sum=*p+*q+*r;
	avg=sum/3;

	cout<<"\n---------------------";
	cout<<"\n Summation = "<<sum;
	cout<<"\n Average   = "<<avg;

	getch();
}


