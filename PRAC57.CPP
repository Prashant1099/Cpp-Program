/* A program which takes any number as i/p and prints power of that number
    with while condition*/


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
	while(i<=e)
	{
		po=po*b;
		i++;
	}

	cout<<"\n "<<b<<" to the power "<<e<<" = "<<po;

	getch();
}
