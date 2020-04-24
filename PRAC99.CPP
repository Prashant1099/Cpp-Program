/* A Program which takes any number as Base and expo and prints Power
   accordingly number with function of with argument and without return type */

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void power(int,int);
void main()
{
	clrscr();

	int b,e;

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	power(b,e);
	getch();
}
void power(int x,int y)
{
	int i,po=1;
	for(i=1;i<=y;i++)
	po=po*x;

	cout<<"\n------------------------------";
	cout<<"\n "<<x<<" to the power "<<y<<" = "<<po;
}
