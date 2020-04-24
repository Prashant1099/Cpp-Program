/* A program which takes any percantage as i/p and prints GRADES accordingly*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	float per;
	char grade;

	clrscr();

	cout<<"\n Enter any Percentage = ";
	cin>>per;

	if(per<=40)
	grade='E';
	else
	if(per<=50)
	grade='D';
	else
	if(per<=60)
	grade='C';
	else
	if(per<=80)
	grade='B';
	else
	grade='A';

	cout<<"\n--------------------------------";
	cout<<"\n Entered Percentage = "<<per;
	cout<<"\n Grade              = "<<grade;
	cout<<"\n--------------------------------";

	getch();
}

