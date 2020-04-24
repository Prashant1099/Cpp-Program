/* A program which prints sum of Natural Numbers to the given range*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,i,sum=0;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=1;i<=r;i++)
	sum=sum+i;

	cout<<"\n Summation of first "<<r<<" Prime Numbers = "<<sum;

	getch();
}


