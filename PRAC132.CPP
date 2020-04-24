/* A program which takes Base and Exponent as i/p and prints power of that number
   with Call by address using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void power(int *x,int *y);
void main()
{
	int b,e,*p,*q;
	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	p=&b;
	q=&e;

	power(p,q);

	getch();
}
void power(int *x,int *y)
{
	int i,po=1;

	for(i=1;i<=*y;i++)
	po=po**x;

	cout<<"\n---------------------------------";
	cout<<"\n "<<*x<<" to the power "<<*y<<" = "<<po;
}




