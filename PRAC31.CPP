/* A program which prints summation of series, 1+x+x^2+x^3+x^4+------+x^n*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int b,e,po=1,i,sum=1,/* r */;

	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";   // cout<<"\n Enter Range = ";
	cin>>e;                     // cin>>r;

	for(i=1;i<=e;i++)
	{
		po=po*b;
		sum=sum+po;
	}

	cout<<"\n Summation = "<<sum;

	getch();
}