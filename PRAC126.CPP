/* A program which takes any number as i/p and prints Reverse of that number
   using Pointer */

#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int n,n1,mod,rev=0,*p,*q;

	cout<<"\n Enter any number = ";
	cin>>n;

	n1=n;
	p=&n;
	q=&n1;

	while(*p>0)
	{
		mod=*p%10;
		rev=rev*10+mod;
		*p=*p/10;
	}

	cout<<"\n-------------------------------";
	cout<<"\n Reverse of "<<*q<<" = "<<rev;

	getch();
}
