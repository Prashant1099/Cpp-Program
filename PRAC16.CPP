/* A program which takes any year as i/p and prints input year is either Leap
   year or not with switch case*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int y;

	clrscr();

	cout<<"\n Enter any Year = ";
	cin>>y;

	switch(y%4)
	{
		case 0:
		cout<<"\n "<<y<<" is Leap Year";
		break;

		case 1:
		cout<<"\n "<<y<<" is not a Leap Year";
		break;

		case 2:
		cout<<"\n "<<y<<" is not a Leap Year";
		break;

		case 3:
		cout<<"\n "<<y<<" is not a Leap Year";
		break;
	}

	getch();
}
