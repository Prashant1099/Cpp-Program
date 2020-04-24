/* A program which prints the summation of series 1+fact(1)+fact(2)+fact(3)+---*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int r,i,f=1,sum=1;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	for(i=1;i<=r;i++)
	{
		f=f*i;
		sum=sum+f;
	}

	cout<<"\n Summation = "<<sum;

	getch();
}