/* A program which takes any number as i/p and prints power of that number
    with do..while condition*/


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

	i=1;
	do
	{
		po=po*b;
		i++;
	}while(i<=e);

	cout<<"\n "<<b<<" to the power "<<e<<" = "<<po;

	getch();
}
