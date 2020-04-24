/* A Program which takes any number as Base and expo and prints Power
   accordingly number with function of without argument and without return type */

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void power();
void main()
{
	clrscr();
	power();
	getch();
}
void power()
{
	int b,e,i,po=1;

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	for(i=1;i<=e;i++)
	po=po*b;

	cout<<"\n------------------------------";
	cout<<"\n "<<b<<" to the power "<<e<<" = "<<po;
}
