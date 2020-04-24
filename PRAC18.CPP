/* A program which prints "MATRIX" for a given range.*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,i;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=1;i<=r;i++)
	{
		cout<<"\n "<<i<<". MATRIX ";
	}

	getch();
}