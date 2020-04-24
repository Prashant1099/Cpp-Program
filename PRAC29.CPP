/* A program which prints sum of fraction, 1/1+1/2+1/3+------*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	float r,i,nu=1,sum=0;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=1;i<=r;i++)
	sum=sum+nu/i;

	cout<<"\n Summation = "<<sum;

	getch();
}