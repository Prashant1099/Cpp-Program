/* A program which takes any year as i/p and prints input year is either Leap
   year or not*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int y;

	clrscr();

	cout<<"\n Enter any Year = ";
	cin>>y;

	if(y%4==0)
	cout<<"\n "<<y<<" is a Leap Year";
	else
	cout<<"\n "<<y<<" is not a Leap Year";


	getch();
}