#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	float b,e,f=1,po=1,sum=1,div,i;

	clrscr();

	cout<<"\n Enter Base = ";
	cin>>b;
	cout<<"\n Enter Expo = ";
	cin>>e;

	for(i=1;i<=e;i++)
	{
		f=f*i;
		po=-po*b;
		div=po/f;
		sum=sum+div;
	}
	cout<<"\n Summation = "<<sum;

	getch();
}
