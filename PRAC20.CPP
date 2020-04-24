/* A program which prints power of any number */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int b,e,i,po=1;

	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	for(i=1;i<=e;i++)
	po=po*b;


	cout<<"\n "<<b<<" to the power "<<e<<" = "<<po;

	getch();
}
