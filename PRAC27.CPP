/* A program which prints sum of Odd Numbers to the given range*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,i,sum=0;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=1;i<=r;i=i+2)
	sum=sum+i;

	cout<<"\n Summation of first "<<r<<" Odd Numbers = "<<sum;

	getch();
}


