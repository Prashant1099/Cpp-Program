/* A program which prints Febonacci series to the given range*/

#include<conio.h>
#include<stdio.h>
#include<iostream.h>

void main()
{

	int b=0,e=1,r,i,sum;

	clrscr();

	cout<<"\n Enter Range = ";
	cin>>r;

	cout<<"\n Fibonacci Series to the range "<<r<<" is "<<b<<","<<e<<"";


	for(i=1;i<r-1;i++)
	{
		sum = b+e;
		cout<<","<<sum;
		b=e;
		e=sum;
	}

	getch();
}


